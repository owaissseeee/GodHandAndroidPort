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

// Function: ResetObjVtableAndFree_19E248
// Address: 0x19e248 - 0x19e2a8
void ResetObjVtableAndFree_19E248_0x19e248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjVtableAndFree_19E248_0x19e248");
#endif

    switch (ctx->pc) {
        case 0x19e284u: goto label_19e284;
        case 0x19e294u: goto label_19e294;
        default: break;
    }

    ctx->pc = 0x19e248u;

    // 0x19e248: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e24c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19e250: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19e250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19e254: 0x24426268  addiu       $v0, $v0, 0x6268
    ctx->pc = 0x19e254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25192));
    // 0x19e258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e264: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19e264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19e268: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x19e268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x19e26c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E26Cu;
    {
        const bool branch_taken_0x19e26c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E26Cu;
        // 0x19e270: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e26c) {
            ctx->pc = 0x19E288u;
            goto label_19e288;
        }
    }
    ctx->pc = 0x19E274u;
    // 0x19e274: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19e274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19e278: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19e278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e27c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19E27Cu;
    SET_GPR_U32(ctx, 31, 0x19E284u);
    ctx->pc = 0x19E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E27Cu;
    // 0x19e280: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19E27Cu, 0x19E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E284u;
label_19e284:
    // 0x19e284: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x19e284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_19e288:
    // 0x19e288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e28c: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x19E28Cu;
    SET_GPR_U32(ctx, 31, 0x19E294u);
    ctx->pc = 0x19E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E28Cu;
    // 0x19e290: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x19E28Cu, 0x19E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E294u;
label_19e294:
    // 0x19e294: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19e294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19e298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2A0u;
        // 0x19e2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E2A8u;
}
