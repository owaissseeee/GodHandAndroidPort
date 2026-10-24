#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcGetDir
// Address: 0x7ce108 - 0x7ce258
void sceMcGetDir_0x7ce108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcGetDir_0x7ce108");
#endif

    switch (ctx->pc) {
        case 0x7ce16cu: goto label_7ce16c;
        case 0x7ce190u: goto label_7ce190;
        case 0x7ce1c0u: goto label_7ce1c0;
        case 0x7ce1d4u: goto label_7ce1d4;
        case 0x7ce204u: goto label_7ce204;
        case 0x7ce214u: goto label_7ce214;
        default: break;
    }

    ctx->pc = 0x7ce108u;

    // 0x7ce108: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7ce108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7ce10c: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce110: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x7ce110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x7ce114: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7ce114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7ce118: 0x24571980  addiu       $s7, $v0, 0x1980
    ctx->pc = 0x7ce118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ce11c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ce11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7ce120: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x7ce120u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce124: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ce124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ce128: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x7ce128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce12c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce12cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce130: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x7ce130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce134: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce138: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x7ce138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce13c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce140: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x7ce140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce144: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x7ce144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x7ce148: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ce148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7ce14c: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x7ce14cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce150: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE150u;
    {
        const bool branch_taken_0x7ce150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE150u;
        // 0x7ce154: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce150) {
            ctx->pc = 0x7CE160u;
            goto label_7ce160;
        }
    }
    ctx->pc = 0x7CE158u;
    // 0x7ce158: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x7CE158u;
    {
        const bool branch_taken_0x7ce158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE158u;
        // 0x7ce15c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce158) {
            ctx->pc = 0x7CE228u;
            goto label_7ce228;
        }
    }
    ctx->pc = 0x7CE160u;
label_7ce160:
    // 0x7ce160: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7ce160u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7ce164: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE164u;
    SET_GPR_U32(ctx, 31, 0x7CE16Cu);
    ctx->pc = 0x7CE168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE164u;
    // 0x7ce168: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE164u, 0x7CE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE16Cu;
label_7ce16c:
    // 0x7ce16c: 0x440002e  bltz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x7CE16Cu;
    {
        const bool branch_taken_0x7ce16c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CE170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE16Cu;
        // 0x7ce170: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce16c) {
            ctx->pc = 0x7CE228u;
            goto label_7ce228;
        }
    }
    ctx->pc = 0x7CE174u;
    // 0x7ce174: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE174u;
    {
        const bool branch_taken_0x7ce174 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce174) {
            ctx->pc = 0x7CE188u;
            goto label_7ce188;
        }
    }
    ctx->pc = 0x7CE17Cu;
    // 0x7ce17c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x7ce17cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ce180: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE180u;
    {
        const bool branch_taken_0x7ce180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE180u;
        // 0x7ce184: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce180) {
            ctx->pc = 0x7CE198u;
            goto label_7ce198;
        }
    }
    ctx->pc = 0x7CE188u;
label_7ce188:
    // 0x7ce188: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE188u;
    SET_GPR_U32(ctx, 31, 0x7CE190u);
    ctx->pc = 0x7CE18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE188u;
    // 0x7ce18c: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE188u, 0x7CE190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE190u;
label_7ce190:
    // 0x7ce190: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7CE190u;
    {
        const bool branch_taken_0x7ce190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE190u;
        // 0x7ce194: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce190) {
            ctx->pc = 0x7CE228u;
            goto label_7ce228;
        }
    }
    ctx->pc = 0x7CE198u;
label_7ce198:
    // 0x7ce198: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7ce198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce19c: 0x24501a30  addiu       $s0, $v0, 0x1A30
    ctx->pc = 0x7ce19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x7ce1a0: 0xac561a30  sw          $s6, 0x1A30($v0)
    ctx->pc = 0x7ce1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 22));
    // 0x7ce1a4: 0xae140004  sw          $s4, 0x4($s0)
    ctx->pc = 0x7ce1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 20));
    // 0x7ce1a8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x7ce1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x7ce1ac: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x7ce1acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x7ce1b0: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x7ce1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x7ce1b4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x7ce1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x7ce1b8: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CE1B8u;
    SET_GPR_U32(ctx, 31, 0x7CE1C0u);
    ctx->pc = 0x7CE1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE1B8u;
    // 0x7ce1bc: 0xae120010  sw          $s2, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CE1B8u, 0x7CE1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE1C0u;
label_7ce1c0:
    // 0x7ce1c0: 0x6200004  bltz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE1C0u;
    {
        const bool branch_taken_0x7ce1c0 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x7CE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE1C0u;
        // 0x7ce1c4: 0xa2000413  sb          $zero, 0x413($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce1c0) {
            ctx->pc = 0x7CE1D4u;
            goto label_7ce1d4;
        }
    }
    ctx->pc = 0x7CE1C8u;
    // 0x7ce1c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7ce1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce1cc: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x7CE1CCu;
    SET_GPR_U32(ctx, 31, 0x7CE1D4u);
    ctx->pc = 0x7CE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE1CCu;
    // 0x7ce1d0: 0x112980  sll         $a1, $s1, 6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x7CE1CCu, 0x7CE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE1D4u;
label_7ce1d4:
    // 0x7ce1d4: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce1d4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce1d8: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce1d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce1dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x7ce1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce1e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x7ce1e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce1e4: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce1e8: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce1e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce1ec: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce1f0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x7ce1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x7ce1f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce1f8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7ce1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7ce1fc: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE1FCu;
    SET_GPR_U32(ctx, 31, 0x7CE204u);
    ctx->pc = 0x7CE200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE1FCu;
    // 0x7ce200: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE1FCu, 0x7CE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE204u;
label_7ce204:
    // 0x7ce204: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE204u;
    {
        const bool branch_taken_0x7ce204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE204u;
        // 0x7ce208: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce204) {
            ctx->pc = 0x7CE21Cu;
            goto label_7ce21c;
        }
    }
    ctx->pc = 0x7CE20Cu;
    // 0x7ce20c: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE20Cu;
    SET_GPR_U32(ctx, 31, 0x7CE214u);
    ctx->pc = 0x7CE210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE20Cu;
    // 0x7ce210: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE20Cu, 0x7CE214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE214u;
label_7ce214:
    // 0x7ce214: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE214u;
    {
        const bool branch_taken_0x7ce214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE214u;
        // 0x7ce218: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce214) {
            ctx->pc = 0x7CE228u;
            goto label_7ce228;
        }
    }
    ctx->pc = 0x7CE21Cu;
label_7ce21c:
    // 0x7ce21c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce220: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce228:
    // 0x7ce228: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x7ce228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ce22c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x7ce22cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ce230: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7ce230u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ce234: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7ce234u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ce238: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7ce238u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce23c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce23cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce240: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce244: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce248: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce24c: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE24Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE24Cu;
        // 0x7ce250: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE24Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CE254u;
    // 0x7ce254: 0x0  nop
    ctx->pc = 0x7ce254u;
    // NOP
    ctx->pc = 0x7ce258u;
}
} // namespace gh_mcport
