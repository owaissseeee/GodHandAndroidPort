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

// Function: func_001A82F8
// Address: 0x1a82f8 - 0x1a8348
void func_001A82F8_0x1a82f8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A82F8_0x1a82f8");
#endif

    if (__builtin_expect(ctx->pc != 0x1a82f8u, 0)) {
        switch (ctx->pc) {
            case 0x1a831cu: goto label_1a831c;
            case 0x1a8334u: goto label_1a8334;
            default: break;
        }
    }


    // 0x1a82f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a82fc: 0x3c030078  lui         $v1, 0x78
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a8300: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8304: 0x8c625fb8  lw          $v0, 0x5FB8($v1)
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785FB8u));
    // 0x1a8308: 0x24705fb8  addiu       $s0, $v1, 0x5FB8
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24504));
    // 0x1a830c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A830Cu;
    {
        const bool branch_taken_0x1a830c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A830Cu;
        // 0x1a8310: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a830c) {
            ctx->pc = 0x1A8334u;
            goto label_1a8334;
        }
    }
    // 0x1a8314: 0xc06f54a  jal         func_1BD528
    ctx->pc = 0x1A8314u;
    SET_GPR_U32(ctx, 31, 0x1A831Cu);
    if (!runtime->callDirectStatic(rdram, ctx, &func_001BD528_0x1bd528, 0x1bd528u, 0x1a831cu)) {
        return;
    }
label_1a831c:
    // 0x1a831c: 0x3c050042  lui         $a1, 0x42
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a8320: 0x3c060078  lui         $a2, 0x78
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a8324: 0x24a57740  addiu       $a1, $a1, 0x7740
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30528));
    // 0x1a8328: 0x24c659b8  addiu       $a2, $a2, 0x59B8
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22968));
    // 0x1a832c: 0xc0c7baa  jal         func_31EEA8
    SET_GPR_U32(ctx, 31, 0x1A8334u);
    ctx->pc = 0x1A8330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A832Cu;
    // 0x1a8330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SetField_0_4_8_31EEA8_0x31eea8, 0x31eea8u, 0x1a8334u)) {
        return;
    }
label_1a8334:
    // 0x1a8334: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a833c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a833cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8340: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8340u;
        // 0x1a8344: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8348u;
}