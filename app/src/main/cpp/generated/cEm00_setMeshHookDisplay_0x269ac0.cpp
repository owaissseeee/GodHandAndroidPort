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

// Function: cEm00_setMeshHookDisplay
// Address: 0x269ac0 - 0x269b50
void cEm00_setMeshHookDisplay_0x269ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_setMeshHookDisplay_0x269ac0");
#endif

    switch (ctx->pc) {
        case 0x269ae4u: goto label_269ae4;
        default: break;
    }

    ctx->pc = 0x269ac0u;

    // 0x269ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269ac4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x269ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x269ac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x269ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x269acc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x269accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ad0: 0x8e02179c  lw          $v0, 0x179C($s0)
    ctx->pc = 0x269ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6044)));
    // 0x269ad4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x269AD4u;
    {
        const bool branch_taken_0x269ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AD4u;
        // 0x269ad8: 0x3c050043  lui         $a1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269ad4) {
            ctx->pc = 0x269B3Cu;
            goto label_269b3c;
        }
    }
    ctx->pc = 0x269ADCu;
    // 0x269adc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269ADCu;
    SET_GPR_U32(ctx, 31, 0x269AE4u);
    ctx->pc = 0x269AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269ADCu;
    // 0x269ae0: 0x24a5cab8  addiu       $a1, $a1, -0x3548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269ADCu, 0x269AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269AE4u;
label_269ae4:
    // 0x269ae4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x269ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269ae8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x269ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x269aec: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x269aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x269af0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x269af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269af4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x269AF4u;
    {
        const bool branch_taken_0x269af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AF4u;
        // 0x269af8: 0x8e03179c  lw          $v1, 0x179C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269af4) {
            ctx->pc = 0x269B20u;
            goto label_269b20;
        }
    }
    ctx->pc = 0x269AFCu;
    // 0x269afc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x269afcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x269b00: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x269b00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x269b04: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x269b08: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x269b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x269b0c: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x269B0Cu;
    {
        const bool branch_taken_0x269b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B0Cu;
        // 0x269b10: 0xac620380  sw          $v0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b0c) {
            ctx->pc = 0x269B3Cu;
            goto label_269b3c;
        }
    }
    ctx->pc = 0x269B14u;
    // 0x269b14: 0x8cc20380  lw          $v0, 0x380($a2)
    ctx->pc = 0x269b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 896)));
    // 0x269b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x269B18u;
    {
        const bool branch_taken_0x269b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B18u;
        // 0x269b1c: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b18) {
            ctx->pc = 0x269B38u;
            goto label_269b38;
        }
    }
    ctx->pc = 0x269B20u;
label_269b20:
    // 0x269b20: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x269b24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269b28: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x269B28u;
    {
        const bool branch_taken_0x269b28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x269B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B28u;
        // 0x269b2c: 0xac620380  sw          $v0, 0x380($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269b28) {
            ctx->pc = 0x269B3Cu;
            goto label_269b3c;
        }
    }
    ctx->pc = 0x269B30u;
    // 0x269b30: 0x8cc20380  lw          $v0, 0x380($a2)
    ctx->pc = 0x269b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 896)));
    // 0x269b34: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_269b38:
    // 0x269b38: 0xacc20380  sw          $v0, 0x380($a2)
    ctx->pc = 0x269b38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 896), GPR_U32(ctx, 2));
label_269b3c:
    // 0x269b3c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x269b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269b40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269b44: 0x3e00008  jr          $ra
    ctx->pc = 0x269B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269B44u;
        // 0x269b48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269B4Cu;
    // 0x269b4c: 0x0  nop
    ctx->pc = 0x269b4cu;
    // NOP
    ctx->pc = 0x269b50u;
}
