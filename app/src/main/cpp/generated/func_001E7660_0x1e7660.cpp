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

// Function: func_001E7660
// Address: 0x1e7660 - 0x1e77b0
void func_001E7660_0x1e7660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7660_0x1e7660");
#endif

    switch (ctx->pc) {
        case 0x1e76b0u: goto label_1e76b0;
        case 0x1e76c0u: goto label_1e76c0;
        case 0x1e7734u: goto label_1e7734;
        case 0x1e7744u: goto label_1e7744;
        case 0x1e7790u: goto label_1e7790;
        case 0x1e77a0u: goto label_1e77a0;
        default: break;
    }

    ctx->pc = 0x1e7660u;

    // 0x1e7660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e7664: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1e7664u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1e7668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e7668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e766c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7674: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E7674u;
    {
        const bool branch_taken_0x1e7674 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7674u;
        // 0x1e7678: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7674) {
            ctx->pc = 0x1E76C8u;
            goto label_1e76c8;
        }
    }
    ctx->pc = 0x1E767Cu;
    // 0x1e767c: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1e767cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1e7680: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7680u;
    {
        const bool branch_taken_0x1e7680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7680) {
            ctx->pc = 0x1E7684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7680u;
            // 0x1e7684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7698u;
            goto label_1e7698;
        }
    }
    ctx->pc = 0x1E7688u;
    // 0x1e7688: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7688u;
    {
        const bool branch_taken_0x1e7688 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7688) {
            ctx->pc = 0x1E76A8u;
            goto label_1e76a8;
        }
    }
    ctx->pc = 0x1E7690u;
    // 0x1e7690: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x1E7690u;
    {
        const bool branch_taken_0x1e7690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7690u;
        // 0x1e7694: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7690) {
            ctx->pc = 0x1E77A4u;
            goto label_1e77a4;
        }
    }
    ctx->pc = 0x1E7698u;
label_1e7698:
    // 0x1e7698: 0x10a2002c  beq         $a1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1E7698u;
    {
        const bool branch_taken_0x1e7698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7698u;
        // 0x1e769c: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7698) {
            ctx->pc = 0x1E774Cu;
            goto label_1e774c;
        }
    }
    ctx->pc = 0x1E76A0u;
    // 0x1e76a0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1E76A0u;
    {
        const bool branch_taken_0x1e76a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E76A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76A0u;
        // 0x1e76a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76a0) {
            ctx->pc = 0x1E77A4u;
            goto label_1e77a4;
        }
    }
    ctx->pc = 0x1E76A8u;
label_1e76a8:
    // 0x1e76a8: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1E76A8u;
    SET_GPR_U32(ctx, 31, 0x1E76B0u);
    ctx->pc = 0x1E76ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76A8u;
    // 0x1e76ac: 0x260400cc  addiu       $a0, $s0, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1E76A8u, 0x1E76B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76B0u;
label_1e76b0:
    // 0x1e76b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e76b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e76b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e76b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e76b8: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E76B8u;
    SET_GPR_U32(ctx, 31, 0x1E76C0u);
    ctx->pc = 0x1E76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76B8u;
    // 0x1e76bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E76B8u, 0x1E76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76C0u;
label_1e76c0:
    // 0x1e76c0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E76C0u;
    {
        const bool branch_taken_0x1e76c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E76C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E76C0u;
        // 0x1e76c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e76c0) {
            ctx->pc = 0x1E77A4u;
            goto label_1e77a4;
        }
    }
    ctx->pc = 0x1E76C8u;
label_1e76c8:
    // 0x1e76c8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e76c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e76cc: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1e76ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1e76d0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e76d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1e76d4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e76d8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1e76d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1e76dc: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1e76dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1e76e0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1e76e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1e76e4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e76e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e76e8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1e76e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1e76ec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e76ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e76f0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1e76f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1e76f4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1e76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1e76f8: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1e76f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1e76fc: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1e76fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1e7700: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1e7700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1e7704: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1e7704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1e7708: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1e7708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1e770c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1e770cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1e7710: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1e7710u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1e7714: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e7714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e7718: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1e7718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1e771c: 0x3c034800  lui         $v1, 0x4800
    ctx->pc = 0x1e771cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18432 << 16));
    // 0x1e7720: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1e7720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1e7724: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1e7724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1e7728: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x1e7728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x1e772c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1E772Cu;
    SET_GPR_U32(ctx, 31, 0x1E7734u);
    ctx->pc = 0x1E7730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E772Cu;
    // 0x1e7730: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1E772Cu, 0x1E7734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7734u;
label_1e7734:
    // 0x1e7734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e773c: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E773Cu;
    SET_GPR_U32(ctx, 31, 0x1E7744u);
    ctx->pc = 0x1E7740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E773Cu;
    // 0x1e7740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E773Cu, 0x1E7744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7744u;
label_1e7744:
    // 0x1e7744: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1E7744u;
    {
        const bool branch_taken_0x1e7744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7744u;
        // 0x1e7748: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7744) {
            ctx->pc = 0x1E77A4u;
            goto label_1e77a4;
        }
    }
    ctx->pc = 0x1E774Cu;
label_1e774c:
    // 0x1e774c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1e774cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1e7750: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1e7750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1e7754: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1e7754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1e7758: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1e7758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1e775c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1e775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1e7760: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1e7760u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1e7764: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x1e7764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1e7768: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1e7768u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1e776c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x1e776cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x1e7770: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1e7770u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1e7774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e7774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e7778: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1e7778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1e777c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1e777cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e7780: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1e7780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1e7784: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x1e7784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x1e7788: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1E7788u;
    SET_GPR_U32(ctx, 31, 0x1E7790u);
    ctx->pc = 0x1E778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7788u;
    // 0x1e778c: 0xa32824  and         $a1, $a1, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1E7788u, 0x1E7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7790u;
label_1e7790:
    // 0x1e7790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e7790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e7794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e7798: 0xc079d1c  jal         func_1E7470
    ctx->pc = 0x1E7798u;
    SET_GPR_U32(ctx, 31, 0x1E77A0u);
    ctx->pc = 0x1E779Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7798u;
    // 0x1e779c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7470u, 0x1E7798u, 0x1E77A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E77A0u;
label_1e77a0:
    // 0x1e77a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e77a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e77a4:
    // 0x1e77a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e77a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e77a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E77A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E77ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E77A8u;
        // 0x1e77ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E77A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E77B0u;
}
