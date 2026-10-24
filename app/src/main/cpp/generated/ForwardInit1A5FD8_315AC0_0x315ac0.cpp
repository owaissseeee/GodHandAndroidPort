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

// Function: ForwardInit1A5FD8_315AC0
// Address: 0x315ac0 - 0x315b30
void ForwardInit1A5FD8_315AC0_0x315ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1A5FD8_315AC0_0x315ac0");
#endif

    switch (ctx->pc) {
        case 0x315af4u: goto label_315af4;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b14u: goto label_315b14;
        default: break;
    }

    ctx->pc = 0x315ac0u;

    // 0x315ac0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x315ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x315ac4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x315ac4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x315ac8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x315ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x315acc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x315accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x315ad0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x315ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x315ad4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x315ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x315ad8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x315AD8u;
    {
        const bool branch_taken_0x315ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AD8u;
        // 0x315adc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ad8) {
            ctx->pc = 0x315B1Cu;
            goto label_315b1c;
        }
    }
    ctx->pc = 0x315AE0u;
    // 0x315ae0: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x315ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x315ae4: 0x24040690  addiu       $a0, $zero, 0x690
    ctx->pc = 0x315ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    // 0x315ae8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x315ae8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x315aec: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x315AECu;
    SET_GPR_U32(ctx, 31, 0x315AF4u);
    ctx->pc = 0x315AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315AECu;
    // 0x315af0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x315AECu, 0x315AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315AF4u;
label_315af4:
    // 0x315af4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x315af4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315af8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x315AF8u;
    {
        const bool branch_taken_0x315af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x315AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AF8u;
        // 0x315afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315af8) {
            ctx->pc = 0x315B1Cu;
            goto label_315b1c;
        }
    }
    ctx->pc = 0x315B00u;
    // 0x315b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x315b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b04: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x315B04u;
    SET_GPR_U32(ctx, 31, 0x315B0Cu);
    ctx->pc = 0x315B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B04u;
    // 0x315b08: 0x24060690  addiu       $a2, $zero, 0x690 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x315B04u, 0x315B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B0Cu;
label_315b0c:
    // 0x315b0c: 0xc0697f6  jal         func_1A5FD8
    ctx->pc = 0x315B0Cu;
    SET_GPR_U32(ctx, 31, 0x315B14u);
    ctx->pc = 0x315B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315B0Cu;
    // 0x315b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5FD8u, 0x315B0Cu, 0x315B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x315B14u;
label_315b14:
    // 0x315b14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x315B14u;
    {
        const bool branch_taken_0x315b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B14u;
        // 0x315b18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b14) {
            ctx->pc = 0x315B24u;
            goto label_315b24;
        }
    }
    ctx->pc = 0x315B1Cu;
label_315b1c:
    // 0x315b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x315b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x315b20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_315b24:
    // 0x315b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x315b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315b28: 0x3e00008  jr          $ra
    ctx->pc = 0x315B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B28u;
        // 0x315b2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315B30u;
}
