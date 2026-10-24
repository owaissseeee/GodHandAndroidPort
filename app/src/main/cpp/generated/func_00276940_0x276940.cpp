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

// Function: func_00276940
// Address: 0x276940 - 0x276980
void func_00276940_0x276940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276940_0x276940");
#endif

    switch (ctx->pc) {
        case 0x276964u: goto label_276964;
        default: break;
    }

    ctx->pc = 0x276940u;

    // 0x276940: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x276940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x276944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276948: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x276948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x27694c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x27694cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x276950: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x276950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x276954: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x276954u;
    {
        const bool branch_taken_0x276954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x276958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276954u;
        // 0x276958: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276954) {
            ctx->pc = 0x27696Cu;
            goto label_27696c;
        }
    }
    ctx->pc = 0x27695Cu;
    // 0x27695c: 0xc052d1c  jal         func_14B470
    ctx->pc = 0x27695Cu;
    SET_GPR_U32(ctx, 31, 0x276964u);
    ctx->pc = 0x14B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B470u, 0x27695Cu, 0x276964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276964u;
label_276964:
    // 0x276964: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276964u;
    {
        const bool branch_taken_0x276964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276964u;
        // 0x276968: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x276964) {
            ctx->pc = 0x276970u;
            goto label_276970;
        }
    }
    ctx->pc = 0x27696Cu;
label_27696c:
    // 0x27696c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27696cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_276970:
    // 0x276970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276974: 0x3e00008  jr          $ra
    ctx->pc = 0x276974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276974u;
        // 0x276978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27697Cu;
    // 0x27697c: 0x0  nop
    ctx->pc = 0x27697cu;
    // NOP
    ctx->pc = 0x276980u;
}
