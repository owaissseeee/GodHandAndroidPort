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

// Function: func_00347908
// Address: 0x347908 - 0x347968
void func_00347908_0x347908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347908_0x347908");
#endif

    switch (ctx->pc) {
        case 0x347924u: goto label_347924;
        default: break;
    }

    ctx->pc = 0x347908u;

    // 0x347908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34790c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347910: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x347910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347914: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x347914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x347918: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34791c: 0xc0d1a0a  jal         func_346828
    ctx->pc = 0x34791Cu;
    SET_GPR_U32(ctx, 31, 0x347924u);
    ctx->pc = 0x347920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34791Cu;
    // 0x347920: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346828u, 0x34791Cu, 0x347924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347924u;
label_347924:
    // 0x347924: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x347924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347928: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34792c: 0x24848f48  addiu       $a0, $a0, -0x70B8
    ctx->pc = 0x34792cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938440));
    // 0x347930: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x347930u;
    {
        const bool branch_taken_0x347930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x347934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347930u;
        // 0x347934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347930) {
            ctx->pc = 0x347950u;
            goto label_347950;
        }
    }
    ctx->pc = 0x347938u;
    // 0x347938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34793c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x34793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347944: 0x80d22f8  j           func_348BE0
    ctx->pc = 0x347944u;
    ctx->pc = 0x347948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347944u;
    // 0x347948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347944u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34794Cu;
    // 0x34794c: 0x0  nop
    ctx->pc = 0x34794cu;
    // NOP
label_347950:
    // 0x347950: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x347950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x347954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347958: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x347958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34795c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34795cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x347960: 0x80cd71a  j           func_335C68
    ctx->pc = 0x347960u;
    ctx->pc = 0x347964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347960u;
    // 0x347964: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C68u, 0x347960u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347968u;
}
