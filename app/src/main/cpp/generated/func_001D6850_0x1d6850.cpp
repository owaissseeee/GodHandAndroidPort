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

// Function: func_001D6850
// Address: 0x1d6850 - 0x1d69a0
void func_001D6850_0x1d6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D6850_0x1d6850");
#endif

    switch (ctx->pc) {
        case 0x1d6898u: goto label_1d6898;
        case 0x1d68a8u: goto label_1d68a8;
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68e8u: goto label_1d68e8;
        case 0x1d68f8u: goto label_1d68f8;
        case 0x1d6970u: goto label_1d6970;
        case 0x1d697cu: goto label_1d697c;
        case 0x1d698cu: goto label_1d698c;
        default: break;
    }

    ctx->pc = 0x1d6850u;

    // 0x1d6850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d6854: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d6854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d6858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d685c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d685cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d6860: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d6860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d6864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d6864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6868: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D6868u;
    {
        const bool branch_taken_0x1d6868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6868u;
        // 0x1d686c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6868) {
            ctx->pc = 0x1D688Cu;
            goto label_1d688c;
        }
    }
    ctx->pc = 0x1D6870u;
    // 0x1d6870: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d6870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d6874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d6878: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x1d6878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
    // 0x1d687c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d6880: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d6880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6884: 0x800008  jr          $a0
    ctx->pc = 0x1D6884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D688Cu: goto label_1d688c;
            case 0x1D68B0u: goto label_1d68b0;
            case 0x1D68C4u: goto label_1d68c4;
            case 0x1D68D4u: goto label_1d68d4;
            case 0x1D6900u: goto label_1d6900;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6884u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D688Cu;
label_1d688c:
    // 0x1d688c: 0x26240c00  addiu       $a0, $s1, 0xC00
    ctx->pc = 0x1d688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1d6890: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6890u;
    SET_GPR_U32(ctx, 31, 0x1D6898u);
    ctx->pc = 0x1D6894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6890u;
    // 0x1d6894: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6890u, 0x1D6898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6898u;
label_1d6898:
    // 0x1d6898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d689c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d689cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d68a0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D68A0u;
    SET_GPR_U32(ctx, 31, 0x1D68A8u);
    ctx->pc = 0x1D68A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68A0u;
    // 0x1d68a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D68A0u, 0x1D68A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68A8u;
label_1d68a8:
    // 0x1d68a8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D68A8u;
    {
        const bool branch_taken_0x1d68a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68A8u;
        // 0x1d68ac: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68a8) {
            ctx->pc = 0x1D6990u;
            goto label_1d6990;
        }
    }
    ctx->pc = 0x1D68B0u;
label_1d68b0:
    // 0x1d68b0: 0x26240c00  addiu       $a0, $s1, 0xC00
    ctx->pc = 0x1d68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1d68b4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D68B4u;
    SET_GPR_U32(ctx, 31, 0x1D68BCu);
    ctx->pc = 0x1D68B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68B4u;
    // 0x1d68b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D68B4u, 0x1D68BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68BCu;
label_1d68bc:
    // 0x1d68bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D68BCu;
    {
        const bool branch_taken_0x1d68bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68BCu;
        // 0x1d68c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68bc) {
            ctx->pc = 0x1D68ECu;
            goto label_1d68ec;
        }
    }
    ctx->pc = 0x1D68C4u;
label_1d68c4:
    // 0x1d68c4: 0x26240c00  addiu       $a0, $s1, 0xC00
    ctx->pc = 0x1d68c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1d68c8: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1d68c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1d68cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D68CCu;
    {
        const bool branch_taken_0x1d68cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68CCu;
        // 0x1d68d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68cc) {
            ctx->pc = 0x1D68E0u;
            goto label_1d68e0;
        }
    }
    ctx->pc = 0x1D68D4u;
label_1d68d4:
    // 0x1d68d4: 0x26240c00  addiu       $a0, $s1, 0xC00
    ctx->pc = 0x1d68d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1d68d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d68d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d68dc: 0x240601c2  addiu       $a2, $zero, 0x1C2
    ctx->pc = 0x1d68dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1d68e0:
    // 0x1d68e0: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D68E0u;
    SET_GPR_U32(ctx, 31, 0x1D68E8u);
    ctx->pc = 0x1D68E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68E0u;
    // 0x1d68e4: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D68E0u, 0x1D68E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68E8u;
label_1d68e8:
    // 0x1d68e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d68e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d68ec:
    // 0x1d68ec: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d68ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d68f0: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D68F0u;
    SET_GPR_U32(ctx, 31, 0x1D68F8u);
    ctx->pc = 0x1D68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D68F0u;
    // 0x1d68f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D68F0u, 0x1D68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D68F8u;
label_1d68f8:
    // 0x1d68f8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D68F8u;
    {
        const bool branch_taken_0x1d68f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68F8u;
        // 0x1d68fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d68f8) {
            ctx->pc = 0x1D6990u;
            goto label_1d6990;
        }
    }
    ctx->pc = 0x1D6900u;
label_1d6900:
    // 0x1d6900: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d6900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d6904: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d6904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d6908: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d6908u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d690c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d690cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6910: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d6910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d6914: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d6914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d6918: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1d6918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d691c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d691cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6920: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6924: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d6924u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d6928: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d6928u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d692c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1d692cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d6930: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1d6930u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d6934: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d6934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d6938: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d6938u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d693c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d693cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d6940: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d6940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d6944: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d6944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d6948: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1d6948u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d694c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d6950: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6954: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d6954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d6958: 0x26300c00  addiu       $s0, $s1, 0xC00
    ctx->pc = 0x1d6958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3072));
    // 0x1d695c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d695cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d6960: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d6960u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6968: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1D6968u;
    SET_GPR_U32(ctx, 31, 0x1D6970u);
    ctx->pc = 0x1D696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6968u;
    // 0x1d696c: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1D6968u, 0x1D6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6970u;
label_1d6970:
    // 0x1d6970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6974: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6974u;
    SET_GPR_U32(ctx, 31, 0x1D697Cu);
    ctx->pc = 0x1D6978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6974u;
    // 0x1d6978: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6974u, 0x1D697Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D697Cu;
label_1d697c:
    // 0x1d697c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d697cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6980: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1d6980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1d6984: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6984u;
    SET_GPR_U32(ctx, 31, 0x1D698Cu);
    ctx->pc = 0x1D6988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6984u;
    // 0x1d6988: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6984u, 0x1D698Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D698Cu;
label_1d698c:
    // 0x1d698c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d698cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d6990:
    // 0x1d6990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d6990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6998: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6998u;
        // 0x1d699c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D69A0u;
}
