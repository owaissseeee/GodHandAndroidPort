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

// Function: func_002D34A8
// Address: 0x2d34a8 - 0x2d36e8
void func_002D34A8_0x2d34a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D34A8_0x2d34a8");
#endif

    switch (ctx->pc) {
        case 0x2d34dcu: goto label_2d34dc;
        case 0x2d3504u: goto label_2d3504;
        case 0x2d351cu: goto label_2d351c;
        case 0x2d3538u: goto label_2d3538;
        case 0x2d3550u: goto label_2d3550;
        case 0x2d359cu: goto label_2d359c;
        case 0x2d35b0u: goto label_2d35b0;
        case 0x2d3604u: goto label_2d3604;
        case 0x2d361cu: goto label_2d361c;
        case 0x2d3678u: goto label_2d3678;
        case 0x2d368cu: goto label_2d368c;
        case 0x2d36a0u: goto label_2d36a0;
        default: break;
    }

    ctx->pc = 0x2d34a8u;

    // 0x2d34a8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2d34a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2d34ac: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2d34acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2d34b0: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2d34b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2d34b4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2d34b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2d34b8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2d34b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2d34bc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2d34bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2d34c0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2d34c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2d34c4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2d34c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2d34c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2d34c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2d34cc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2d34ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2d34d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d34d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d34d4: 0xc0b4c84  jal         func_2D3210
    ctx->pc = 0x2D34D4u;
    SET_GPR_U32(ctx, 31, 0x2D34DCu);
    ctx->pc = 0x2D34D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34D4u;
    // 0x2d34d8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3210u, 0x2D34D4u, 0x2D34DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D34DCu;
label_2d34dc:
    // 0x2d34dc: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2D34DCu;
    {
        const bool branch_taken_0x2d34dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34DCu;
        // 0x2d34e0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34dc) {
            ctx->pc = 0x2D36BCu;
            goto label_2d36bc;
        }
    }
    ctx->pc = 0x2D34E4u;
    // 0x2d34e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d34e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D34E8u;
    {
        const bool branch_taken_0x2d34e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D34ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34E8u;
        // 0x2d34ec: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34e8) {
            ctx->pc = 0x2D3524u;
            goto label_2d3524;
        }
    }
    ctx->pc = 0x2D34F0u;
    // 0x2d34f0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d34f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d34f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D34F4u;
    {
        const bool branch_taken_0x2d34f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D34F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D34F4u;
        // 0x2d34f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d34f4) {
            ctx->pc = 0x2D3514u;
            goto label_2d3514;
        }
    }
    ctx->pc = 0x2D34FCu;
    // 0x2d34fc: 0xc0ec010  jal         func_3B0040
    ctx->pc = 0x2D34FCu;
    SET_GPR_U32(ctx, 31, 0x2D3504u);
    ctx->pc = 0x2D3500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D34FCu;
    // 0x2d3500: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0040u, 0x2D34FCu, 0x2D3504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3504u;
label_2d3504:
    // 0x2d3504: 0x441006d  bgez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2D3504u;
    {
        const bool branch_taken_0x2d3504 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2D3508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3504u;
        // 0x2d3508: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3504) {
            ctx->pc = 0x2D36BCu;
            goto label_2d36bc;
        }
    }
    ctx->pc = 0x2D350Cu;
    // 0x2d350c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x2D350Cu;
    {
        const bool branch_taken_0x2d350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d350c) {
            ctx->pc = 0x2D3698u;
            goto label_2d3698;
        }
    }
    ctx->pc = 0x2D3514u;
label_2d3514:
    // 0x2d3514: 0xc0b4c9e  jal         func_2D3278
    ctx->pc = 0x2D3514u;
    SET_GPR_U32(ctx, 31, 0x2D351Cu);
    ctx->pc = 0x2D3518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3514u;
    // 0x2d3518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3278u, 0x2D3514u, 0x2D351Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D351Cu;
label_2d351c:
    // 0x2d351c: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2D351Cu;
    {
        const bool branch_taken_0x2d351c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D351Cu;
        // 0x2d3520: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d351c) {
            ctx->pc = 0x2D36BCu;
            goto label_2d36bc;
        }
    }
    ctx->pc = 0x2D3524u;
label_2d3524:
    // 0x2d3524: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2d3524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2d3528: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D3528u;
    {
        const bool branch_taken_0x2d3528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D352Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3528u;
        // 0x2d352c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3528) {
            ctx->pc = 0x2D353Cu;
            goto label_2d353c;
        }
    }
    ctx->pc = 0x2D3530u;
    // 0x2d3530: 0xc0b4ce2  jal         func_2D3388
    ctx->pc = 0x2D3530u;
    SET_GPR_U32(ctx, 31, 0x2D3538u);
    ctx->pc = 0x2D3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3530u;
    // 0x2d3534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3388u, 0x2D3530u, 0x2D3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3538u;
label_2d3538:
    // 0x2d3538: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d3538u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d353c:
    // 0x2d353c: 0x263e0010  addiu       $fp, $s1, 0x10
    ctx->pc = 0x2d353cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2d3540: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2d3540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3544: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x2d3544u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d3548: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x2d3548u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d354c: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x2d354cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2d3550:
    // 0x2d3550: 0x3d29821  addu        $s3, $fp, $s2
    ctx->pc = 0x2d3550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
    // 0x2d3554: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2d3554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2d3558: 0x12150012  beq         $s0, $s5, . + 4 + (0x12 << 2)
    ctx->pc = 0x2D3558u;
    {
        const bool branch_taken_0x2d3558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x2D355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3558u;
        // 0x2d355c: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3558) {
            ctx->pc = 0x2D35A4u;
            goto label_2d35a4;
        }
    }
    ctx->pc = 0x2D3560u;
    // 0x2d3560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D3560u;
    {
        const bool branch_taken_0x2d3560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3560) {
            ctx->pc = 0x2D3578u;
            goto label_2d3578;
        }
    }
    ctx->pc = 0x2D3568u;
    // 0x2d3568: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D3568u;
    {
        const bool branch_taken_0x2d3568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d3568) {
            ctx->pc = 0x2D356Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3568u;
            // 0x2d356c: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3590u;
            goto label_2d3590;
        }
    }
    ctx->pc = 0x2D3570u;
    // 0x2d3570: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2D3570u;
    {
        const bool branch_taken_0x2d3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3570u;
        // 0x2d3574: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3570) {
            ctx->pc = 0x2D36ACu;
            goto label_2d36ac;
        }
    }
    ctx->pc = 0x2D3578u;
label_2d3578:
    // 0x2d3578: 0x12170024  beq         $s0, $s7, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D3578u;
    {
        const bool branch_taken_0x2d3578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x2D357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3578u;
        // 0x2d357c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3578) {
            ctx->pc = 0x2D360Cu;
            goto label_2d360c;
        }
    }
    ctx->pc = 0x2D3580u;
    // 0x2d3580: 0x52160038  beql        $s0, $s6, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D3580u;
    {
        const bool branch_taken_0x2d3580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 22));
        if (branch_taken_0x2d3580) {
            ctx->pc = 0x2D3584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D3580u;
            // 0x2d3584: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3664u;
            goto label_2d3664;
        }
    }
    ctx->pc = 0x2D3588u;
    // 0x2d3588: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2D3588u;
    {
        const bool branch_taken_0x2d3588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3588u;
        // 0x2d358c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3588) {
            ctx->pc = 0x2D36ACu;
            goto label_2d36ac;
        }
    }
    ctx->pc = 0x2D3590u;
label_2d3590:
    // 0x2d3590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3594: 0xc0b4c9e  jal         func_2D3278
    ctx->pc = 0x2D3594u;
    SET_GPR_U32(ctx, 31, 0x2D359Cu);
    ctx->pc = 0x2D3598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3594u;
    // 0x2d3598: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3278u, 0x2D3594u, 0x2D359Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D359Cu;
label_2d359c:
    // 0x2d359c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x2D359Cu;
    {
        const bool branch_taken_0x2d359c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D35A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D359Cu;
        // 0x2d35a0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d359c) {
            ctx->pc = 0x2D36ACu;
            goto label_2d36ac;
        }
    }
    ctx->pc = 0x2D35A4u;
label_2d35a4:
    // 0x2d35a4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x2d35a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d35a8: 0xc0ec010  jal         func_3B0040
    ctx->pc = 0x2D35A8u;
    SET_GPR_U32(ctx, 31, 0x2D35B0u);
    ctx->pc = 0x2D35ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35A8u;
    // 0x2d35ac: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0040u, 0x2D35A8u, 0x2D35B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D35B0u;
label_2d35b0:
    // 0x2d35b0: 0x443003e  bgezl       $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2D35B0u;
    {
        const bool branch_taken_0x2d35b0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x2d35b0) {
            ctx->pc = 0x2D35B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D35B0u;
            // 0x2d35b4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D36ACu;
            goto label_2d36ac;
        }
    }
    ctx->pc = 0x2D35B8u;
    // 0x2d35b8: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2d35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2d35bc: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x2D35BCu;
    {
        const bool branch_taken_0x2d35bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d35bc) {
            ctx->pc = 0x2D35C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D35BCu;
            // 0x2d35c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D36ACu;
            goto label_2d36ac;
        }
    }
    ctx->pc = 0x2D35C4u;
    // 0x2d35c4: 0x8e2a0068  lw          $t2, 0x68($s1)
    ctx->pc = 0x2d35c4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x2d35c8: 0x2323821  addu        $a3, $s1, $s2
    ctx->pc = 0x2d35c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x2d35cc: 0x8e23007c  lw          $v1, 0x7C($s1)
    ctx->pc = 0x2d35ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x2d35d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d35d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d35d4: 0x8e26006c  lw          $a2, 0x6C($s1)
    ctx->pc = 0x2d35d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2d35d8: 0x340580d0  ori         $a1, $zero, 0x80D0
    ctx->pc = 0x2d35d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32976);
    // 0x2d35dc: 0x6a102b  sltu        $v0, $v1, $t2
    ctx->pc = 0x2d35dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2d35e0: 0xae30008c  sw          $s0, 0x8C($s1)
    ctx->pc = 0x2d35e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
    // 0x2d35e4: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x2d35e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x2d35e8: 0x8e290078  lw          $t1, 0x78($s1)
    ctx->pc = 0x2d35e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d35ec: 0xae2a0090  sw          $t2, 0x90($s1)
    ctx->pc = 0x2d35ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 10));
    // 0x2d35f0: 0xc94821  addu        $t1, $a2, $t1
    ctx->pc = 0x2d35f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2d35f4: 0x8ce80084  lw          $t0, 0x84($a3)
    ctx->pc = 0x2d35f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x2d35f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d35f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d35fc: 0xc0e84ae  jal         func_3A12B8
    ctx->pc = 0x2D35FCu;
    SET_GPR_U32(ctx, 31, 0x2D3604u);
    ctx->pc = 0x2D3600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D35FCu;
    // 0x2d3600: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A12B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A12B8u, 0x2D35FCu, 0x2D3604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3604u;
label_2d3604:
    // 0x2d3604: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2D3604u;
    {
        const bool branch_taken_0x2d3604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3604u;
        // 0x2d3608: 0xae770000  sw          $s7, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3604) {
            ctx->pc = 0x2D36A8u;
            goto label_2d36a8;
        }
    }
    ctx->pc = 0x2D360Cu;
label_2d360c:
    // 0x2d360c: 0x340580f0  ori         $a1, $zero, 0x80F0
    ctx->pc = 0x2d360cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x2d3610: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d3610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3614: 0xc0e84ae  jal         func_3A12B8
    ctx->pc = 0x2D3614u;
    SET_GPR_U32(ctx, 31, 0x2D361Cu);
    ctx->pc = 0x2D3618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3614u;
    // 0x2d3618: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A12B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A12B8u, 0x2D3614u, 0x2D361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D361Cu;
label_2d361c:
    // 0x2d361c: 0x50550001  beql        $v0, $s5, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D361Cu;
    {
        const bool branch_taken_0x2d361c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2d361c) {
            ctx->pc = 0x2D3620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D361Cu;
            // 0x2d3620: 0xae30008c  sw          $s0, 0x8C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3624u;
            goto label_2d3624;
        }
    }
    ctx->pc = 0x2D3624u;
label_2d3624:
    // 0x2d3624: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2d3624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2d3628: 0x1450000e  bne         $v0, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D3628u;
    {
        const bool branch_taken_0x2d3628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2D362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3628u;
        // 0x2d362c: 0x8e22007c  lw          $v0, 0x7C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3628) {
            ctx->pc = 0x2D3664u;
            goto label_2d3664;
        }
    }
    ctx->pc = 0x2D3630u;
    // 0x2d3630: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2d3630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2d3634: 0x8e240090  lw          $a0, 0x90($s1)
    ctx->pc = 0x2d3634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x2d3638: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d3638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d363c: 0x8e250074  lw          $a1, 0x74($s1)
    ctx->pc = 0x2d363cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x2d3640: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2d3640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d3644: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x2d3644u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
    // 0x2d3648: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3648u;
    {
        const bool branch_taken_0x2d3648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3648u;
        // 0x2d364c: 0xae22007c  sw          $v0, 0x7C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3648) {
            ctx->pc = 0x2D3658u;
            goto label_2d3658;
        }
    }
    ctx->pc = 0x2D3650u;
    // 0x2d3650: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3650u;
    {
        const bool branch_taken_0x2d3650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3650u;
        // 0x2d3654: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3650) {
            ctx->pc = 0x2D365Cu;
            goto label_2d365c;
        }
    }
    ctx->pc = 0x2D3658u;
label_2d3658:
    // 0x2d3658: 0xae760000  sw          $s6, 0x0($s3)
    ctx->pc = 0x2d3658u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 22));
label_2d365c:
    // 0x2d365c: 0xae20008c  sw          $zero, 0x8C($s1)
    ctx->pc = 0x2d365cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
    // 0x2d3660: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x2d3660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2d3664:
    // 0x2d3664: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D3664u;
    {
        const bool branch_taken_0x2d3664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3664u;
        // 0x2d3668: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3664) {
            ctx->pc = 0x2D36ACu;
            goto label_2d36ac;
        }
    }
    ctx->pc = 0x2D366Cu;
    // 0x2d366c: 0x26300084  addiu       $s0, $s1, 0x84
    ctx->pc = 0x2d366cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
    // 0x2d3670: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d3670u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3674: 0x0  nop
    ctx->pc = 0x2d3674u;
    // NOP
label_2d3678:
    // 0x2d3678: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d3678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d367c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D367Cu;
    {
        const bool branch_taken_0x2d367c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D367Cu;
        // 0x2d3680: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d367c) {
            ctx->pc = 0x2D3690u;
            goto label_2d3690;
        }
    }
    ctx->pc = 0x2D3684u;
    // 0x2d3684: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x2D3684u;
    SET_GPR_U32(ctx, 31, 0x2D368Cu);
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x2D3684u, 0x2D368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D368Cu;
label_2d368c:
    // 0x2d368c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d368cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2d3690:
    // 0x2d3690: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D3690u;
    {
        const bool branch_taken_0x2d3690 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2D3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3690u;
        // 0x2d3694: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3690) {
            ctx->pc = 0x2D3678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3678;
        }
    }
    ctx->pc = 0x2D3698u;
label_2d3698:
    // 0x2d3698: 0xc0b4c88  jal         func_2D3220
    ctx->pc = 0x2D3698u;
    SET_GPR_U32(ctx, 31, 0x2D36A0u);
    ctx->pc = 0x2D369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3698u;
    // 0x2d369c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3220u, 0x2D3698u, 0x2D36A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D36A0u;
label_2d36a0:
    // 0x2d36a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D36A0u;
    {
        const bool branch_taken_0x2d36a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D36A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36A0u;
        // 0x2d36a4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36a0) {
            ctx->pc = 0x2D36BCu;
            goto label_2d36bc;
        }
    }
    ctx->pc = 0x2D36A8u;
label_2d36a8:
    // 0x2d36a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d36a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2d36ac:
    // 0x2d36ac: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2d36acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2d36b0: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x2D36B0u;
    {
        const bool branch_taken_0x2d36b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D36B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36B0u;
        // 0x2d36b4: 0x149080  sll         $s2, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d36b0) {
            ctx->pc = 0x2D3550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3550;
        }
    }
    ctx->pc = 0x2D36B8u;
    // 0x2d36b8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2d36b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2d36bc:
    // 0x2d36bc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2d36bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d36c0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2d36c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d36c4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2d36c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d36c8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2d36c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d36cc: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2d36ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d36d0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2d36d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d36d4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2d36d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d36d8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2d36d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d36dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d36dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d36e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D36E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D36E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D36E0u;
        // 0x2d36e4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D36E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D36E8u;
}
