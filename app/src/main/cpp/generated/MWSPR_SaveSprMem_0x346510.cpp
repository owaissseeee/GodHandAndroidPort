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

// Function: MWSPR_SaveSprMem
// Address: 0x346510 - 0x346578
void MWSPR_SaveSprMem_0x346510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWSPR_SaveSprMem_0x346510");
#endif

    switch (ctx->pc) {
        case 0x346538u: goto label_346538;
        case 0x346558u: goto label_346558;
        default: break;
    }

    ctx->pc = 0x346510u;

    // 0x346510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x346510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x346514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346518: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x346518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34651c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34651cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x346520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x346520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346524: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x346524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x346528: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x346528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34652c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x34652cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x346530: 0xc0e5c40  jal         func_397100
    ctx->pc = 0x346530u;
    SET_GPR_U32(ctx, 31, 0x346538u);
    ctx->pc = 0x346534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346530u;
    // 0x346534: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397100u, 0x346530u, 0x346538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346538u;
label_346538:
    // 0x346538: 0x2604000f  addiu       $a0, $s0, 0xF
    ctx->pc = 0x346538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x34653c: 0x2a030000  slti        $v1, $s0, 0x0
    ctx->pc = 0x34653cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x346540: 0xac510080  sw          $s1, 0x80($v0)
    ctx->pc = 0x346540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 17));
    // 0x346544: 0x83800b  movn        $s0, $a0, $v1
    ctx->pc = 0x346544u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
    // 0x346548: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x346548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34654c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x34654cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346550: 0xc0e5d34  jal         func_3974D0
    ctx->pc = 0x346550u;
    SET_GPR_U32(ctx, 31, 0x346558u);
    ctx->pc = 0x346554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346550u;
    // 0x346554: 0x103103  sra         $a2, $s0, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3974D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3974D0u, 0x346550u, 0x346558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346558u;
label_346558:
    // 0x346558: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x346558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34655c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34655cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x346560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x346564: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x346564u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x346568: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x346568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34656c: 0x3e00008  jr          $ra
    ctx->pc = 0x34656Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34656Cu;
        // 0x346570: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34656Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346574u;
    // 0x346574: 0x0  nop
    ctx->pc = 0x346574u;
    // NOP
    ctx->pc = 0x346578u;
}
