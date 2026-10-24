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

// Function: func_0031A538
// Address: 0x31a538 - 0x31a600
void func_0031A538_0x31a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A538_0x31a538");
#endif

    switch (ctx->pc) {
        case 0x31a574u: goto label_31a574;
        case 0x31a584u: goto label_31a584;
        case 0x31a590u: goto label_31a590;
        default: break;
    }

    ctx->pc = 0x31a538u;

    // 0x31a538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a53c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x31a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x31a540: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31a540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31a544: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x31a544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x31a548: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a54c: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x31a54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x31a550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a554: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31a554u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a558: 0x8c430584  lw          $v1, 0x584($v0)
    ctx->pc = 0x31a558u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x31a55c: 0x8c440210  lw          $a0, 0x210($v0)
    ctx->pc = 0x31a55cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7476B0u));
    // 0x31a560: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x31a560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x31a564: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31A564u;
    {
        const bool branch_taken_0x31a564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A564u;
        // 0x31a568: 0x30900001  andi        $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a564) {
            ctx->pc = 0x31A57Cu;
            goto label_31a57c;
        }
    }
    ctx->pc = 0x31A56Cu;
    // 0x31a56c: 0xc0ebfd4  jal         func_3AFF50
    ctx->pc = 0x31A56Cu;
    SET_GPR_U32(ctx, 31, 0x31A574u);
    ctx->pc = 0x31A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A56Cu;
    // 0x31a570: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF50u, 0x31A56Cu, 0x31A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A574u;
label_31a574:
    // 0x31a574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31A574u;
    {
        const bool branch_taken_0x31a574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A574u;
        // 0x31a578: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a574) {
            ctx->pc = 0x31A588u;
            goto label_31a588;
        }
    }
    ctx->pc = 0x31A57Cu;
label_31a57c:
    // 0x31a57c: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x31A57Cu;
    SET_GPR_U32(ctx, 31, 0x31A584u);
    ctx->pc = 0x31A580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A57Cu;
    // 0x31a580: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x31A57Cu, 0x31A584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A584u;
label_31a584:
    // 0x31a584: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31a584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31a588:
    // 0x31a588: 0xc0e543e  jal         func_3950F8
    ctx->pc = 0x31A588u;
    SET_GPR_U32(ctx, 31, 0x31A590u);
    ctx->pc = 0x31A58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A588u;
    // 0x31a58c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3950F8u, 0x31A588u, 0x31A590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A590u;
label_31a590:
    // 0x31a590: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31a590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31a594: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x31a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31a598: 0x3463e010  ori         $v1, $v1, 0xE010
    ctx->pc = 0x31a598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57360);
    // 0x31a59c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x31a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31a5a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x31a5a0u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 4));
    // 0x31a5a4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x31a5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x31a5a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31a5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31a5ac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31a5acu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 4));
    // 0x31a5b0: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x31a5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x31a5b4: 0x1011c0  sll         $v0, $s0, 7
    ctx->pc = 0x31a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x31a5b8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x31a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x31a5bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x31a5c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31a5c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31a5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31a5c8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x31a5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a5cc: 0x34639030  ori         $v1, $v1, 0x9030
    ctx->pc = 0x31a5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36912);
    // 0x31a5d0: 0x34849000  ori         $a0, $a0, 0x9000
    ctx->pc = 0x31a5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)36864);
    // 0x31a5d4: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x31a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x31a5d8: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x31a5d8u;
    runtime->Store32(rdram, ctx, 0x10009030u, GPR_U32(ctx, 6));
    // 0x31a5dc: 0x24020145  addiu       $v0, $zero, 0x145
    ctx->pc = 0x31a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
    // 0x31a5e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31a5e0u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 5));
    // 0x31a5e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31a5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a5ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a5f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x31a5f0u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 2));
    // 0x31a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x31A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A5F4u;
        // 0x31a5f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A5FCu;
    // 0x31a5fc: 0x0  nop
    ctx->pc = 0x31a5fcu;
    // NOP
    ctx->pc = 0x31a600u;
}
