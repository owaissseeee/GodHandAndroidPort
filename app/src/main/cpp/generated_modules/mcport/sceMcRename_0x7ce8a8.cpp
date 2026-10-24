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
// Function: sceMcRename
// Address: 0x7ce8a8 - 0x7cea00
void sceMcRename_0x7ce8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcRename_0x7ce8a8");
#endif

    switch (ctx->pc) {
        case 0x7ce900u: goto label_7ce900;
        case 0x7ce92cu: goto label_7ce92c;
        case 0x7ce958u: goto label_7ce958;
        case 0x7ce974u: goto label_7ce974;
        case 0x7ce984u: goto label_7ce984;
        case 0x7ce9b4u: goto label_7ce9b4;
        case 0x7ce9c4u: goto label_7ce9c4;
        default: break;
    }

    ctx->pc = 0x7ce8a8u;

    // 0x7ce8a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7ce8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7ce8ac: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7ce8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7ce8b0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x7ce8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x7ce8b4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x7ce8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x7ce8b8: 0x24561980  addiu       $s6, $v0, 0x1980
    ctx->pc = 0x7ce8b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7ce8bc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7ce8bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7ce8c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7ce8c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce8c4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ce8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ce8c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x7ce8c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce8cc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ce8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ce8d0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x7ce8d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce8d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x7ce8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x7ce8d8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x7ce8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x7ce8dc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ce8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ce8e0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x7ce8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7ce8e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE8E4u;
    {
        const bool branch_taken_0x7ce8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE8E4u;
        // 0x7ce8e8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce8e4) {
            ctx->pc = 0x7CE8F4u;
            goto label_7ce8f4;
        }
    }
    ctx->pc = 0x7CE8ECu;
    // 0x7ce8ec: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x7CE8ECu;
    {
        const bool branch_taken_0x7ce8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE8ECu;
        // 0x7ce8f0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce8ec) {
            ctx->pc = 0x7CE9D8u;
            goto label_7ce9d8;
        }
    }
    ctx->pc = 0x7CE8F4u;
label_7ce8f4:
    // 0x7ce8f4: 0x3c15007d  lui         $s5, 0x7D
    ctx->pc = 0x7ce8f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)125 << 16));
    // 0x7ce8f8: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CE8F8u;
    SET_GPR_U32(ctx, 31, 0x7CE900u);
    ctx->pc = 0x7CE8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE8F8u;
    // 0x7ce8fc: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CE8F8u, 0x7CE900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE900u;
label_7ce900:
    // 0x7ce900: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x7CE900u;
    {
        const bool branch_taken_0x7ce900 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7CE904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE900u;
        // 0x7ce904: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce900) {
            ctx->pc = 0x7CE9D8u;
            goto label_7ce9d8;
        }
    }
    ctx->pc = 0x7CE908u;
    // 0x7ce908: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CE908u;
    {
        const bool branch_taken_0x7ce908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce908) {
            ctx->pc = 0x7CE924u;
            goto label_7ce924;
        }
    }
    ctx->pc = 0x7CE910u;
    // 0x7ce910: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x7ce910u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ce914: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CE914u;
    {
        const bool branch_taken_0x7ce914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7ce914) {
            ctx->pc = 0x7CE924u;
            goto label_7ce924;
        }
    }
    ctx->pc = 0x7CE91Cu;
    // 0x7ce91c: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE91Cu;
    {
        const bool branch_taken_0x7ce91c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CE920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE91Cu;
        // 0x7ce920: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce91c) {
            ctx->pc = 0x7CE934u;
            goto label_7ce934;
        }
    }
    ctx->pc = 0x7CE924u;
label_7ce924:
    // 0x7ce924: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE924u;
    SET_GPR_U32(ctx, 31, 0x7CE92Cu);
    ctx->pc = 0x7CE928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE924u;
    // 0x7ce928: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE924u, 0x7CE92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE92Cu;
label_7ce92c:
    // 0x7ce92c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7CE92Cu;
    {
        const bool branch_taken_0x7ce92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE92Cu;
        // 0x7ce930: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce92c) {
            ctx->pc = 0x7CE9D8u;
            goto label_7ce9d8;
        }
    }
    ctx->pc = 0x7CE934u;
label_7ce934:
    // 0x7ce934: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x7ce934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7ce938: 0x24511a30  addiu       $s1, $v0, 0x1A30
    ctx->pc = 0x7ce938u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 6704));
    // 0x7ce93c: 0xac541a30  sw          $s4, 0x1A30($v0)
    ctx->pc = 0x7ce93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6704), GPR_U32(ctx, 20));
    // 0x7ce940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7ce940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce944: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x7ce944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x7ce948: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x7ce948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x7ce94c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x7ce94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x7ce950: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CE950u;
    SET_GPR_U32(ctx, 31, 0x7CE958u);
    ctx->pc = 0x7CE954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE950u;
    // 0x7ce954: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CE950u, 0x7CE958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE958u;
label_7ce958:
    // 0x7ce958: 0x3c10007d  lui         $s0, 0x7D
    ctx->pc = 0x7ce958u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
    // 0x7ce95c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x7ce95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce960: 0x261019e0  addiu       $s0, $s0, 0x19E0
    ctx->pc = 0x7ce960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6624));
    // 0x7ce964: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x7ce964u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x7ce968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ce968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce96c: 0xc0e9768  jal         func_3A5DA0
    ctx->pc = 0x7CE96Cu;
    SET_GPR_U32(ctx, 31, 0x7CE974u);
    ctx->pc = 0x7CE970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE96Cu;
    // 0x7ce970: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5DA0u, 0x7CE96Cu, 0x7CE974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE974u;
label_7ce974:
    // 0x7ce974: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x7ce974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x7ce978: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7ce978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce97c: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x7CE97Cu;
    SET_GPR_U32(ctx, 31, 0x7CE984u);
    ctx->pc = 0x7CE980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE97Cu;
    // 0x7ce980: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x7CE97Cu, 0x7CE984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE984u;
label_7ce984:
    // 0x7ce984: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7ce984u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7ce988: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7ce988u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7ce98c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x7ce98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce990: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x7ce990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ce994: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7ce994u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7ce998: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7ce998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7ce99c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7ce99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7ce9a0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x7ce9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x7ce9a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ce9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ce9a8: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x7ce9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x7ce9ac: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CE9ACu;
    SET_GPR_U32(ctx, 31, 0x7CE9B4u);
    ctx->pc = 0x7CE9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE9ACu;
    // 0x7ce9b0: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CE9ACu, 0x7CE9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE9B4u;
label_7ce9b4:
    // 0x7ce9b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CE9B4u;
    {
        const bool branch_taken_0x7ce9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE9B4u;
        // 0x7ce9b8: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce9b4) {
            ctx->pc = 0x7CE9CCu;
            goto label_7ce9cc;
        }
    }
    ctx->pc = 0x7CE9BCu;
    // 0x7ce9bc: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CE9BCu;
    SET_GPR_U32(ctx, 31, 0x7CE9C4u);
    ctx->pc = 0x7CE9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CE9BCu;
    // 0x7ce9c0: 0x8ea407b4  lw          $a0, 0x7B4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CE9BCu, 0x7CE9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CE9C4u;
label_7ce9c4:
    // 0x7ce9c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CE9C4u;
    {
        const bool branch_taken_0x7ce9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CE9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE9C4u;
        // 0x7ce9c8: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ce9c4) {
            ctx->pc = 0x7CE9D8u;
            goto label_7ce9d8;
        }
    }
    ctx->pc = 0x7CE9CCu;
label_7ce9cc:
    // 0x7ce9cc: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ce9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ce9d0: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ce9d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ce9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ce9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ce9d8:
    // 0x7ce9d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x7ce9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ce9dc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x7ce9dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ce9e0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x7ce9e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ce9e4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x7ce9e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ce9e8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ce9e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ce9ec: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ce9ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ce9f0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ce9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ce9f4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ce9f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ce9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7CE9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CE9F8u;
        // 0x7ce9fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CE9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CEA00u;
}
} // namespace gh_mcport
