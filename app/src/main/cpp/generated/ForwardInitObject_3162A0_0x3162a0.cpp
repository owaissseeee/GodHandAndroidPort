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

// Function: ForwardInitObject_3162A0
// Address: 0x3162a0 - 0x316310
void ForwardInitObject_3162A0_0x3162a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_3162A0_0x3162a0");
#endif

    switch (ctx->pc) {
        case 0x3162d4u: goto label_3162d4;
        case 0x3162ecu: goto label_3162ec;
        case 0x3162f4u: goto label_3162f4;
        default: break;
    }

    ctx->pc = 0x3162a0u;

    // 0x3162a0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x3162a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3162a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3162a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3162a8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3162a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3162ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3162acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3162b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3162b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3162b4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3162b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3162b8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3162B8u;
    {
        const bool branch_taken_0x3162b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3162BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162B8u;
        // 0x3162bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162b8) {
            ctx->pc = 0x3162FCu;
            goto label_3162fc;
        }
    }
    ctx->pc = 0x3162C0u;
    // 0x3162c0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x3162c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3162c4: 0x24040640  addiu       $a0, $zero, 0x640
    ctx->pc = 0x3162c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x3162c8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x3162c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3162cc: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x3162CCu;
    SET_GPR_U32(ctx, 31, 0x3162D4u);
    ctx->pc = 0x3162D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162CCu;
    // 0x3162d0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x3162CCu, 0x3162D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162D4u;
label_3162d4:
    // 0x3162d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3162d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162d8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3162D8u;
    {
        const bool branch_taken_0x3162d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162D8u;
        // 0x3162dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162d8) {
            ctx->pc = 0x3162FCu;
            goto label_3162fc;
        }
    }
    ctx->pc = 0x3162E0u;
    // 0x3162e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3162e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3162e4: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x3162E4u;
    SET_GPR_U32(ctx, 31, 0x3162ECu);
    ctx->pc = 0x3162E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162E4u;
    // 0x3162e8: 0x24060640  addiu       $a2, $zero, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3162E4u, 0x3162ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162ECu;
label_3162ec:
    // 0x3162ec: 0xc06c93a  jal         func_1B24E8
    ctx->pc = 0x3162ECu;
    SET_GPR_U32(ctx, 31, 0x3162F4u);
    ctx->pc = 0x3162F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3162ECu;
    // 0x3162f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E8u, 0x3162ECu, 0x3162F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3162F4u;
label_3162f4:
    // 0x3162f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3162F4u;
    {
        const bool branch_taken_0x3162f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3162F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3162F4u;
        // 0x3162f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3162f4) {
            ctx->pc = 0x316304u;
            goto label_316304;
        }
    }
    ctx->pc = 0x3162FCu;
label_3162fc:
    // 0x3162fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3162fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316300: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316304:
    // 0x316304: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316308: 0x3e00008  jr          $ra
    ctx->pc = 0x316308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316308u;
        // 0x31630c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316310u;
}
