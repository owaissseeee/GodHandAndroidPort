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

// Function: GetOrInitSingleton7857D8_170200
// Address: 0x170200 - 0x170250
void GetOrInitSingleton7857D8_170200_0x170200(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInitSingleton7857D8_170200_0x170200");
#endif

    if (__builtin_expect(ctx->pc != 0x170200u, 0)) {
        switch (ctx->pc) {
            case 0x170224u: goto label_170224;
            case 0x17023cu: goto label_17023c;
            default: break;
        }
    }


    // 0x170200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170204: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x170208: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17020c: 0x8c6257d8  lw          $v0, 0x57D8($v1)
    ctx->pc = 0x17020cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7857D8u));
    // 0x170210: 0x247057d8  addiu       $s0, $v1, 0x57D8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22488));
    // 0x170214: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170214u;
    {
        const bool branch_taken_0x170214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170214u;
        // 0x170218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170214) {
            ctx->pc = 0x17023Cu;
            goto label_17023c;
        }
    }
    // 0x17021c: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x17021Cu;
    SET_GPR_U32(ctx, 31, 0x170224u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetOrInitGlobal785798_1C3BE8_0x1c3be8, 0x1c3be8u, 0x170224u)) {
        return;
    }
label_170224:
    // 0x170224: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x170228: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x17022c: 0x24a504e0  addiu       $a1, $a1, 0x4E0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1248));
    // 0x170230: 0x24c65798  addiu       $a2, $a2, 0x5798
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x170234: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x17023Cu);
    ctx->pc = 0x170238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170234u;
    // 0x170238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x17023cu)) {
        return;
    }
label_17023c:
    // 0x17023c: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170240: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170244: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170244u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170248: 0x3e00008  jr          $ra
    ctx->pc = 0x170248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170248u;
        // 0x17024c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170250u;
}