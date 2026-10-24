#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0037F0E0
// Address: 0x37f0e0 - 0x37f4f8
void func_0037F0E0_0x37f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037F0E0_0x37f0e0");
#endif

    switch (ctx->pc) {
        case 0x37f12cu: goto label_37f12c;
        case 0x37f168u: goto label_37f168;
        case 0x37f1c4u: goto label_37f1c4;
        case 0x37f20cu: goto label_37f20c;
        case 0x37f254u: goto label_37f254;
        case 0x37f2acu: goto label_37f2ac;
        case 0x37f2c8u: goto label_37f2c8;
        case 0x37f2d0u: goto label_37f2d0;
        case 0x37f2d8u: goto label_37f2d8;
        case 0x37f2ecu: goto label_37f2ec;
        case 0x37f350u: goto label_37f350;
        case 0x37f374u: goto label_37f374;
        case 0x37f390u: goto label_37f390;
        case 0x37f3bcu: goto label_37f3bc;
        case 0x37f3d8u: goto label_37f3d8;
        case 0x37f40cu: goto label_37f40c;
        case 0x37f44cu: goto label_37f44c;
        case 0x37f4acu: goto label_37f4ac;
        default: break;
    }

    ctx->pc = 0x37f0e0u;

    // 0x37f0e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x37f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x37f0e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x37f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x37f0e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x37f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x37f0ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x37f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x37f0f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37f0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f0f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37f0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37f0f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37f0fc: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37f0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f100: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37f100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37f104: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x37f104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x37f108: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37f108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37f10c: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x37f10cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37f110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x37f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37f114: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37f114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37f118: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f11c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F11Cu;
    {
        const bool branch_taken_0x37f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f11c) {
            ctx->pc = 0x37F120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F11Cu;
            // 0x37f120: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F134u;
            goto label_37f134;
        }
    }
    ctx->pc = 0x37F124u;
    // 0x37f124: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F124u;
    SET_GPR_U32(ctx, 31, 0x37F12Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F124u, 0x37F12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F12Cu;
label_37f12c:
    // 0x37f12c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F12Cu;
    {
        const bool branch_taken_0x37f12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F12Cu;
        // 0x37f130: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f12c) {
            ctx->pc = 0x37F13Cu;
            goto label_37f13c;
        }
    }
    ctx->pc = 0x37F134u;
label_37f134:
    // 0x37f134: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f138: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f138u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37f13c:
    // 0x37f13c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x37f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x37f140: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x37f140u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37f144: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37f148: 0xa3a30004  sb          $v1, 0x4($sp)
    ctx->pc = 0x37f148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f14c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f150: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37f150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37f154: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f158: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F158u;
    {
        const bool branch_taken_0x37f158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F158u;
        // 0x37f15c: 0x26320370  addiu       $s2, $s1, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f158) {
            ctx->pc = 0x37F170u;
            goto label_37f170;
        }
    }
    ctx->pc = 0x37F160u;
    // 0x37f160: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F160u;
    SET_GPR_U32(ctx, 31, 0x37F168u);
    ctx->pc = 0x37F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F160u;
    // 0x37f164: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F160u, 0x37F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F168u;
label_37f168:
    // 0x37f168: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37F168u;
    {
        const bool branch_taken_0x37f168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F168u;
        // 0x37f16c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f168) {
            ctx->pc = 0x37F180u;
            goto label_37f180;
        }
    }
    ctx->pc = 0x37F170u;
label_37f170:
    // 0x37f170: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37f170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37f174: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f178: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x37f17c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x37f17cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_37f180:
    // 0x37f180: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x37f180u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f184: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x37f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f188: 0x10530025  beq         $v0, $s3, . + 4 + (0x25 << 2)
    ctx->pc = 0x37F188u;
    {
        const bool branch_taken_0x37f188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x37F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F188u;
        // 0x37f18c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f188) {
            ctx->pc = 0x37F220u;
            goto label_37f220;
        }
    }
    ctx->pc = 0x37F190u;
    // 0x37f190: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x37f190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x37f194: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f198: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f19c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f1a0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F1A0u;
    {
        const bool branch_taken_0x37f1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1A0u;
        // 0x37f1a4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1a0) {
            ctx->pc = 0x37F1F0u;
            goto label_37f1f0;
        }
    }
    ctx->pc = 0x37F1A8u;
    // 0x37f1a8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f1ac: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f1b0: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f1b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F1B4u;
    {
        const bool branch_taken_0x37f1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1B4u;
        // 0x37f1b8: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1b4) {
            ctx->pc = 0x37F1CCu;
            goto label_37f1cc;
        }
    }
    ctx->pc = 0x37F1BCu;
    // 0x37f1bc: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F1BCu;
    SET_GPR_U32(ctx, 31, 0x37F1C4u);
    ctx->pc = 0x37F1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F1BCu;
    // 0x37f1c0: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F1BCu, 0x37F1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F1C4u;
label_37f1c4:
    // 0x37f1c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F1C4u;
    {
        const bool branch_taken_0x37f1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F1C4u;
        // 0x37f1c8: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f1c4) {
            ctx->pc = 0x37F1F4u;
            goto label_37f1f4;
        }
    }
    ctx->pc = 0x37F1CCu;
label_37f1cc:
    // 0x37f1cc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37f1d0: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f1d4: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f1d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f1dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f1e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f1e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f1e8: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f1ec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f1f0:
    // 0x37f1f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37f1f4:
    // 0x37f1f4: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x37f1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x37f1f8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x37f1fc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F1FCu;
    {
        const bool branch_taken_0x37f1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37f1fc) {
            ctx->pc = 0x37F200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37F1FCu;
            // 0x37f200: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37F214u;
            goto label_37f214;
        }
    }
    ctx->pc = 0x37F204u;
    // 0x37f204: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F204u;
    SET_GPR_U32(ctx, 31, 0x37F20Cu);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F204u, 0x37F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F20Cu;
label_37f20c:
    // 0x37f20c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F20Cu;
    {
        const bool branch_taken_0x37f20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F20Cu;
        // 0x37f210: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f20c) {
            ctx->pc = 0x37F21Cu;
            goto label_37f21c;
        }
    }
    ctx->pc = 0x37F214u;
label_37f214:
    // 0x37f214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f218: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37f21c:
    // 0x37f21c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37f21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37f220:
    // 0x37f220: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f224: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f228: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f22c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f230: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F230u;
    {
        const bool branch_taken_0x37f230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F230u;
        // 0x37f234: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f230) {
            ctx->pc = 0x37F280u;
            goto label_37f280;
        }
    }
    ctx->pc = 0x37F238u;
    // 0x37f238: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f23c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f240: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f240u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f244: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F244u;
    {
        const bool branch_taken_0x37f244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F244u;
        // 0x37f248: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f244) {
            ctx->pc = 0x37F25Cu;
            goto label_37f25c;
        }
    }
    ctx->pc = 0x37F24Cu;
    // 0x37f24c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F24Cu;
    SET_GPR_U32(ctx, 31, 0x37F254u);
    ctx->pc = 0x37F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F24Cu;
    // 0x37f250: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F24Cu, 0x37F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F254u;
label_37f254:
    // 0x37f254: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F254u;
    {
        const bool branch_taken_0x37f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F254u;
        // 0x37f258: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f254) {
            ctx->pc = 0x37F284u;
            goto label_37f284;
        }
    }
    ctx->pc = 0x37F25Cu;
label_37f25c:
    // 0x37f25c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37f260: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f264: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f268: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f26c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f278: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f278u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f27c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f280:
    // 0x37f280: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x37f280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37f284:
    // 0x37f284: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f288: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F288u;
    {
        const bool branch_taken_0x37f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F288u;
        // 0x37f28c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f288) {
            ctx->pc = 0x37F29Cu;
            goto label_37f29c;
        }
    }
    ctx->pc = 0x37F290u;
    // 0x37f290: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f294: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F294u;
    {
        const bool branch_taken_0x37f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F294u;
        // 0x37f298: 0x2450c208  addiu       $s0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f294) {
            ctx->pc = 0x37F2A4u;
            goto label_37f2a4;
        }
    }
    ctx->pc = 0x37F29Cu;
label_37f29c:
    // 0x37f29c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f2a0: 0x8fb00000  lw          $s0, 0x0($sp)
    ctx->pc = 0x37f2a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37f2a4:
    // 0x37f2a4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37F2A4u;
    SET_GPR_U32(ctx, 31, 0x37F2ACu);
    ctx->pc = 0x37F2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2A4u;
    // 0x37f2a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37F2A4u, 0x37F2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2ACu;
label_37f2ac:
    // 0x37f2ac: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x37f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x37f2b0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37f2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2b4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37f2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37f2b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f2bc: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x37f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f2c0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37F2C0u;
    SET_GPR_U32(ctx, 31, 0x37F2C8u);
    ctx->pc = 0x37F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2C0u;
    // 0x37f2c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37F2C0u, 0x37F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2C8u;
label_37f2c8:
    // 0x37f2c8: 0xc0e1318  jal         func_384C60
    ctx->pc = 0x37F2C8u;
    SET_GPR_U32(ctx, 31, 0x37F2D0u);
    ctx->pc = 0x37F2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2C8u;
    // 0x37f2cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x384C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384C60u, 0x37F2C8u, 0x37F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2D0u;
label_37f2d0:
    // 0x37f2d0: 0xc0c7224  jal         func_31C890
    ctx->pc = 0x37F2D0u;
    SET_GPR_U32(ctx, 31, 0x37F2D8u);
    ctx->pc = 0x37F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2D0u;
    // 0x37f2d4: 0x2404031c  addiu       $a0, $zero, 0x31C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 796));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C890u, 0x37F2D0u, 0x37F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2D8u;
label_37f2d8:
    // 0x37f2d8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37F2D8u;
    {
        const bool branch_taken_0x37f2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F2D8u;
        // 0x37f2dc: 0xae4200fc  sw          $v0, 0xFC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f2d8) {
            ctx->pc = 0x37F330u;
            goto label_37f330;
        }
    }
    ctx->pc = 0x37F2E0u;
    // 0x37f2e0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x37f2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x37f2e4: 0xc0e9a88  jal         func_3A6A20
    ctx->pc = 0x37F2E4u;
    SET_GPR_U32(ctx, 31, 0x37F2ECu);
    ctx->pc = 0x37F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F2E4u;
    // 0x37f2e8: 0x2484c220  addiu       $a0, $a0, -0x3DE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6A20u, 0x37F2E4u, 0x37F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F2ECu;
label_37f2ec:
    // 0x37f2ec: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37f2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37f2f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37f2f4: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x37f2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f2f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x37f2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x37f2fc: 0xa2230002  sb          $v1, 0x2($s1)
    ctx->pc = 0x37f2fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x37f300: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f304: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f308: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f30c: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x37F30Cu;
    {
        const bool branch_taken_0x37f30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F30Cu;
        // 0x37f310: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f30c) {
            ctx->pc = 0x37F4D8u;
            goto label_37f4d8;
        }
    }
    ctx->pc = 0x37F314u;
    // 0x37f314: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f318: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f31c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f31cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f320: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x37F320u;
    {
        const bool branch_taken_0x37f320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F320u;
        // 0x37f324: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f320) {
            ctx->pc = 0x37F4A4u;
            goto label_37f4a4;
        }
    }
    ctx->pc = 0x37F328u;
    // 0x37f328: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x37F328u;
    {
        const bool branch_taken_0x37f328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F328u;
        // 0x37f32c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f328) {
            ctx->pc = 0x37F4B8u;
            goto label_37f4b8;
        }
    }
    ctx->pc = 0x37F330u;
label_37f330:
    // 0x37f330: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x37f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x37f334: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x37f334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x37f338: 0x2444b168  addiu       $a0, $v0, -0x4E98
    ctx->pc = 0x37f338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947176));
    // 0x37f33c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x37f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3BB174u));
    // 0x37f340: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F340u;
    {
        const bool branch_taken_0x37f340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F340u;
        // 0x37f344: 0x2470c210  addiu       $s0, $v1, -0x3DF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f340) {
            ctx->pc = 0x37F358u;
            goto label_37f358;
        }
    }
    ctx->pc = 0x37F348u;
    // 0x37f348: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x37F348u;
    SET_GPR_U32(ctx, 31, 0x37F350u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x37F348u, 0x37F350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F350u;
label_37f350:
    // 0x37f350: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x37F350u;
    {
        const bool branch_taken_0x37f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F350u;
        // 0x37f354: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f350) {
            ctx->pc = 0x37F368u;
            goto label_37f368;
        }
    }
    ctx->pc = 0x37F358u;
label_37f358:
    // 0x37f358: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x37f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x37f35c: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x37f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x37f360: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x37f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37f364: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x37f364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_37f368:
    // 0x37f368: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x37f368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x37f36c: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37F36Cu;
    SET_GPR_U32(ctx, 31, 0x37F374u);
    ctx->pc = 0x37F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F36Cu;
    // 0x37f370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37F36Cu, 0x37F374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F374u;
label_37f374:
    // 0x37f374: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x37f374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x37f378: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37f378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f37c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37f37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f380: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f384: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x37f384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f388: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37F388u;
    SET_GPR_U32(ctx, 31, 0x37F390u);
    ctx->pc = 0x37F38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F388u;
    // 0x37f38c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37F388u, 0x37F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F390u;
label_37f390:
    // 0x37f390: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x37f390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x37f394: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f398: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F398u;
    {
        const bool branch_taken_0x37f398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F398u;
        // 0x37f39c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f398) {
            ctx->pc = 0x37F3ACu;
            goto label_37f3ac;
        }
    }
    ctx->pc = 0x37F3A0u;
    // 0x37f3a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f3a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F3A4u;
    {
        const bool branch_taken_0x37f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3A4u;
        // 0x37f3a8: 0x2450c208  addiu       $s0, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3a4) {
            ctx->pc = 0x37F3B4u;
            goto label_37f3b4;
        }
    }
    ctx->pc = 0x37F3ACu;
label_37f3ac:
    // 0x37f3ac: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f3acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f3b0: 0x8e300040  lw          $s0, 0x40($s1)
    ctx->pc = 0x37f3b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_37f3b4:
    // 0x37f3b4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x37F3B4u;
    SET_GPR_U32(ctx, 31, 0x37F3BCu);
    ctx->pc = 0x37F3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F3B4u;
    // 0x37f3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x37F3B4u, 0x37F3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F3BCu;
label_37f3bc:
    // 0x37f3bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f3c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x37f3c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f3c4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x37f3c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f3c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37f3cc: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x37f3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f3d0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x37F3D0u;
    SET_GPR_U32(ctx, 31, 0x37F3D8u);
    ctx->pc = 0x37F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F3D0u;
    // 0x37f3d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x37F3D0u, 0x37F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F3D8u;
label_37f3d8:
    // 0x37f3d8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x37f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f3dc: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x37f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x37f3e0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37F3E0u;
    {
        const bool branch_taken_0x37f3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3E0u;
        // 0x37f3e4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3e0) {
            ctx->pc = 0x37F3F4u;
            goto label_37f3f4;
        }
    }
    ctx->pc = 0x37F3E8u;
    // 0x37f3e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37f3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37f3ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37F3ECu;
    {
        const bool branch_taken_0x37f3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F3ECu;
        // 0x37f3f0: 0x2445c208  addiu       $a1, $v0, -0x3DF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f3ec) {
            ctx->pc = 0x37F3FCu;
            goto label_37f3fc;
        }
    }
    ctx->pc = 0x37F3F4u;
label_37f3f4:
    // 0x37f3f4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x37f3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f3f8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x37f3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_37f3fc:
    // 0x37f3fc: 0x8e4700fc  lw          $a3, 0xFC($s2)
    ctx->pc = 0x37f3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 252)));
    // 0x37f400: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37f400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37f404: 0xc0c8a74  jal         func_3229D0
    ctx->pc = 0x37F404u;
    SET_GPR_U32(ctx, 31, 0x37F40Cu);
    ctx->pc = 0x37F408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F404u;
    // 0x37f408: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3229D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229D0u, 0x37F404u, 0x37F40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F40Cu;
label_37f40c:
    // 0x37f40c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x37f40cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37f410: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x37f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37f414: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x37f414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x37f418: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x37f418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x37f41c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f420: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f424: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f428: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F428u;
    {
        const bool branch_taken_0x37f428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F428u;
        // 0x37f42c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f428) {
            ctx->pc = 0x37F478u;
            goto label_37f478;
        }
    }
    ctx->pc = 0x37F430u;
    // 0x37f430: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f434: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f438: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f438u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f43c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F43Cu;
    {
        const bool branch_taken_0x37f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F43Cu;
        // 0x37f440: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f43c) {
            ctx->pc = 0x37F454u;
            goto label_37f454;
        }
    }
    ctx->pc = 0x37F444u;
    // 0x37f444: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F444u;
    SET_GPR_U32(ctx, 31, 0x37F44Cu);
    ctx->pc = 0x37F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F444u;
    // 0x37f448: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F444u, 0x37F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F44Cu;
label_37f44c:
    // 0x37f44c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F44Cu;
    {
        const bool branch_taken_0x37f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F44Cu;
        // 0x37f450: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f44c) {
            ctx->pc = 0x37F47Cu;
            goto label_37f47c;
        }
    }
    ctx->pc = 0x37F454u;
label_37f454:
    // 0x37f454: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x37f458: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f458u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f45c: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f460: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f468: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f46c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f470: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f474: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f478:
    // 0x37f478: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x37f478u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_37f47c:
    // 0x37f47c: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x37f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x37f480: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x37f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x37f484: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f488: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x37F488u;
    {
        const bool branch_taken_0x37f488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F488u;
        // 0x37f48c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f488) {
            ctx->pc = 0x37F4D8u;
            goto label_37f4d8;
        }
    }
    ctx->pc = 0x37F490u;
    // 0x37f490: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x37f490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x37f494: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37f494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x37f498: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x37f498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x37f49c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37F49Cu;
    {
        const bool branch_taken_0x37f49c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F49Cu;
        // 0x37f4a0: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f49c) {
            ctx->pc = 0x37F4B4u;
            goto label_37f4b4;
        }
    }
    ctx->pc = 0x37F4A4u;
label_37f4a4:
    // 0x37f4a4: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x37F4A4u;
    SET_GPR_U32(ctx, 31, 0x37F4ACu);
    ctx->pc = 0x37F4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37F4A4u;
    // 0x37f4a8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x37F4A4u, 0x37F4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37F4ACu;
label_37f4ac:
    // 0x37f4ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37F4ACu;
    {
        const bool branch_taken_0x37f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4ACu;
        // 0x37f4b0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37f4ac) {
            ctx->pc = 0x37F4DCu;
            goto label_37f4dc;
        }
    }
    ctx->pc = 0x37F4B4u;
label_37f4b4:
    // 0x37f4b4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x37f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_37f4b8:
    // 0x37f4b8: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x37f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x37f4bc: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x37f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x37f4c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37f4c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37f4c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37f4cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x37f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37f4d0: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x37f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x37f4d4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x37f4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_37f4d8:
    // 0x37f4d8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x37f4d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37f4dc:
    // 0x37f4dc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x37f4dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37f4e0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x37f4e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37f4e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37f4e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37f4e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37f4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x37F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37F4ECu;
        // 0x37f4f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37F4F4u;
    // 0x37f4f4: 0x0  nop
    ctx->pc = 0x37f4f4u;
    // NOP
    ctx->pc = 0x37f4f8u;
}
