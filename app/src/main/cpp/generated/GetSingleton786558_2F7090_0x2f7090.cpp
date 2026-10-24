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

// Function: GetSingleton786558_2F7090
// Address: 0x2f7090 - 0x2f70e8
void GetSingleton786558_2F7090_0x2f7090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton786558_2F7090_0x2f7090");
#endif

    switch (ctx->pc) {
        case 0x2f70b4u: goto label_2f70b4;
        case 0x2f70ccu: goto label_2f70cc;
        default: break;
    }

    ctx->pc = 0x2f7090u;

    // 0x2f7090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7094: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x2f7094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x2f7098: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f7098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f709c: 0x8c626558  lw          $v0, 0x6558($v1)
    ctx->pc = 0x2f709cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x786558u));
    // 0x2f70a0: 0x24706558  addiu       $s0, $v1, 0x6558
    ctx->pc = 0x2f70a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 25944));
    // 0x2f70a4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F70A4u;
    {
        const bool branch_taken_0x2f70a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F70A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70A4u;
        // 0x2f70a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70a4) {
            ctx->pc = 0x2F70CCu;
            goto label_2f70cc;
        }
    }
    ctx->pc = 0x2F70ACu;
    // 0x2f70ac: 0xc0c0052  jal         func_300148
    ctx->pc = 0x2F70ACu;
    SET_GPR_U32(ctx, 31, 0x2F70B4u);
    ctx->pc = 0x300148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300148u, 0x2F70ACu, 0x2F70B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70B4u;
label_2f70b4:
    // 0x2f70b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f70b8: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x2f70b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x2f70bc: 0x24a5f6c0  addiu       $a1, $a1, -0x940
    ctx->pc = 0x2f70bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964928));
    // 0x2f70c0: 0x24c663c8  addiu       $a2, $a2, 0x63C8
    ctx->pc = 0x2f70c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25544));
    // 0x2f70c4: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x2F70C4u;
    SET_GPR_U32(ctx, 31, 0x2F70CCu);
    ctx->pc = 0x2F70C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70C4u;
    // 0x2f70c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x2F70C4u, 0x2F70CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F70CCu;
label_2f70cc:
    // 0x2f70cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f70ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f70d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f70d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f70d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f70d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F70D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70D8u;
        // 0x2f70dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F70D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F70E0u;
    // 0x2f70e0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2f70e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f70e4: 0x0  nop
    ctx->pc = 0x2f70e4u;
    // NOP
    ctx->pc = 0x2f70e8u;
}
