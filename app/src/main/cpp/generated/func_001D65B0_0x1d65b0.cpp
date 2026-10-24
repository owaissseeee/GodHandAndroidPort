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

// Function: func_001D65B0
// Address: 0x1d65b0 - 0x1d6700
void func_001D65B0_0x1d65b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D65B0_0x1d65b0");
#endif

    switch (ctx->pc) {
        case 0x1d65f8u: goto label_1d65f8;
        case 0x1d6608u: goto label_1d6608;
        case 0x1d661cu: goto label_1d661c;
        case 0x1d6648u: goto label_1d6648;
        case 0x1d6658u: goto label_1d6658;
        case 0x1d66d0u: goto label_1d66d0;
        case 0x1d66dcu: goto label_1d66dc;
        case 0x1d66ecu: goto label_1d66ec;
        default: break;
    }

    ctx->pc = 0x1d65b0u;

    // 0x1d65b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d65b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d65b4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d65b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d65b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d65b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d65bc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d65bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d65c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d65c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d65c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d65c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D65C8u;
    {
        const bool branch_taken_0x1d65c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D65C8u;
        // 0x1d65cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65c8) {
            ctx->pc = 0x1D65ECu;
            goto label_1d65ec;
        }
    }
    ctx->pc = 0x1D65D0u;
    // 0x1d65d0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d65d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d65d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d65d8: 0x2442b200  addiu       $v0, $v0, -0x4E00
    ctx->pc = 0x1d65d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947328));
    // 0x1d65dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d65dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d65e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d65e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d65e4: 0x800008  jr          $a0
    ctx->pc = 0x1D65E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D65ECu: goto label_1d65ec;
            case 0x1D6610u: goto label_1d6610;
            case 0x1D6624u: goto label_1d6624;
            case 0x1D6634u: goto label_1d6634;
            case 0x1D6660u: goto label_1d6660;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D65E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D65ECu;
label_1d65ec:
    // 0x1d65ec: 0x26240b08  addiu       $a0, $s1, 0xB08
    ctx->pc = 0x1d65ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2824));
    // 0x1d65f0: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D65F0u;
    SET_GPR_U32(ctx, 31, 0x1D65F8u);
    ctx->pc = 0x1D65F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D65F0u;
    // 0x1d65f4: 0x2405fe3e  addiu       $a1, $zero, -0x1C2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D65F0u, 0x1D65F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D65F8u;
label_1d65f8:
    // 0x1d65f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d65f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d65fc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d65fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d6600: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6600u;
    SET_GPR_U32(ctx, 31, 0x1D6608u);
    ctx->pc = 0x1D6604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6600u;
    // 0x1d6604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6600u, 0x1D6608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6608u;
label_1d6608:
    // 0x1d6608: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D6608u;
    {
        const bool branch_taken_0x1d6608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6608u;
        // 0x1d660c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6608) {
            ctx->pc = 0x1D66F0u;
            goto label_1d66f0;
        }
    }
    ctx->pc = 0x1D6610u;
label_1d6610:
    // 0x1d6610: 0x26240b08  addiu       $a0, $s1, 0xB08
    ctx->pc = 0x1d6610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2824));
    // 0x1d6614: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D6614u;
    SET_GPR_U32(ctx, 31, 0x1D661Cu);
    ctx->pc = 0x1D6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6614u;
    // 0x1d6618: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D6614u, 0x1D661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D661Cu;
label_1d661c:
    // 0x1d661c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1D661Cu;
    {
        const bool branch_taken_0x1d661c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D661Cu;
        // 0x1d6620: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d661c) {
            ctx->pc = 0x1D664Cu;
            goto label_1d664c;
        }
    }
    ctx->pc = 0x1D6624u;
label_1d6624:
    // 0x1d6624: 0x26240b08  addiu       $a0, $s1, 0xB08
    ctx->pc = 0x1d6624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2824));
    // 0x1d6628: 0x2405fe3e  addiu       $a1, $zero, -0x1C2
    ctx->pc = 0x1d6628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966846));
    // 0x1d662c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D662Cu;
    {
        const bool branch_taken_0x1d662c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D662Cu;
        // 0x1d6630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d662c) {
            ctx->pc = 0x1D6640u;
            goto label_1d6640;
        }
    }
    ctx->pc = 0x1D6634u;
label_1d6634:
    // 0x1d6634: 0x26240b08  addiu       $a0, $s1, 0xB08
    ctx->pc = 0x1d6634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2824));
    // 0x1d6638: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d6638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d663c: 0x240601c2  addiu       $a2, $zero, 0x1C2
    ctx->pc = 0x1d663cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 450));
label_1d6640:
    // 0x1d6640: 0xc0b59da  jal         func_2D6768
    ctx->pc = 0x1D6640u;
    SET_GPR_U32(ctx, 31, 0x1D6648u);
    ctx->pc = 0x1D6644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6640u;
    // 0x1d6644: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6768u, 0x1D6640u, 0x1D6648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6648u;
label_1d6648:
    // 0x1d6648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d664c:
    // 0x1d664c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d664cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d6650: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D6650u;
    SET_GPR_U32(ctx, 31, 0x1D6658u);
    ctx->pc = 0x1D6654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6650u;
    // 0x1d6654: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D6650u, 0x1D6658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6658u;
label_1d6658:
    // 0x1d6658: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1D6658u;
    {
        const bool branch_taken_0x1d6658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6658u;
        // 0x1d665c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6658) {
            ctx->pc = 0x1D66F0u;
            goto label_1d66f0;
        }
    }
    ctx->pc = 0x1D6660u;
label_1d6660:
    // 0x1d6660: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1d6660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1d6664: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d6664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d6668: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1d6668u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1d666c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1d666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1d6670: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1d6670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1d6674: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1d6674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1d6678: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1d6678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1d667c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d667cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d6680: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d6680u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d6684: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1d6684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1d6688: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d6688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d668c: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1d6690: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x1d6690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x1d6694: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x1d6694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x1d6698: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1d6698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1d669c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1d669cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1d66a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d66a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d66a4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1d66a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d66a8: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x1d66a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x1d66ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1d66acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1d66b0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d66b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1d66b4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x1d66b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x1d66b8: 0x26300b08  addiu       $s0, $s1, 0xB08
    ctx->pc = 0x1d66b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2824));
    // 0x1d66bc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1d66bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1d66c0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d66c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1d66c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d66c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66c8: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1D66C8u;
    SET_GPR_U32(ctx, 31, 0x1D66D0u);
    ctx->pc = 0x1D66CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66C8u;
    // 0x1d66cc: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1D66C8u, 0x1D66D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66D0u;
label_1d66d0:
    // 0x1d66d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d66d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66d4: 0xc0b59b4  jal         func_2D66D0
    ctx->pc = 0x1D66D4u;
    SET_GPR_U32(ctx, 31, 0x1D66DCu);
    ctx->pc = 0x1D66D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66D4u;
    // 0x1d66d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66D0u, 0x1D66D4u, 0x1D66DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66DCu;
label_1d66dc:
    // 0x1d66dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d66dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d66e0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x1d66e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1d66e4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D66E4u;
    SET_GPR_U32(ctx, 31, 0x1D66ECu);
    ctx->pc = 0x1D66E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D66E4u;
    // 0x1d66e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D66E4u, 0x1D66ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D66ECu;
label_1d66ec:
    // 0x1d66ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d66ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d66f0:
    // 0x1d66f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d66f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d66f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d66f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d66f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D66F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D66FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D66F8u;
        // 0x1d66fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D66F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6700u;
}
