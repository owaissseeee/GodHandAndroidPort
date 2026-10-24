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

// Function: ForwardInitBuffer_314240
// Address: 0x314240 - 0x3142b0
void ForwardInitBuffer_314240_0x314240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314240_0x314240");
#endif

    switch (ctx->pc) {
        case 0x314274u: goto label_314274;
        case 0x31428cu: goto label_31428c;
        case 0x314294u: goto label_314294;
        default: break;
    }

    ctx->pc = 0x314240u;

    // 0x314240: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x314240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314244: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x314244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314248: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314248u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31424c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31424cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314250: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314254: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x314254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314258: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314258u;
    {
        const bool branch_taken_0x314258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314258u;
        // 0x31425c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314258) {
            ctx->pc = 0x31429Cu;
            goto label_31429c;
        }
    }
    ctx->pc = 0x314260u;
    // 0x314260: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x314260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314264: 0x24040860  addiu       $a0, $zero, 0x860
    ctx->pc = 0x314264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x314268: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x314268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31426c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31426Cu;
    SET_GPR_U32(ctx, 31, 0x314274u);
    ctx->pc = 0x314270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31426Cu;
    // 0x314270: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31426Cu, 0x314274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314274u;
label_314274:
    // 0x314274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314278: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314278u;
    {
        const bool branch_taken_0x314278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314278u;
        // 0x31427c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314278) {
            ctx->pc = 0x31429Cu;
            goto label_31429c;
        }
    }
    ctx->pc = 0x314280u;
    // 0x314280: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314284: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x314284u;
    SET_GPR_U32(ctx, 31, 0x31428Cu);
    ctx->pc = 0x314288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314284u;
    // 0x314288: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x314284u, 0x31428Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31428Cu;
label_31428c:
    // 0x31428c: 0xc0646ac  jal         func_191AB0
    ctx->pc = 0x31428Cu;
    SET_GPR_U32(ctx, 31, 0x314294u);
    ctx->pc = 0x314290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31428Cu;
    // 0x314290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191AB0u, 0x31428Cu, 0x314294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314294u;
label_314294:
    // 0x314294: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314294u;
    {
        const bool branch_taken_0x314294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314294u;
        // 0x314298: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314294) {
            ctx->pc = 0x3142A4u;
            goto label_3142a4;
        }
    }
    ctx->pc = 0x31429Cu;
label_31429c:
    // 0x31429c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31429cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3142a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3142a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3142a4:
    // 0x3142a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3142a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3142a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3142A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3142ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142A8u;
        // 0x3142ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3142A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3142B0u;
}
