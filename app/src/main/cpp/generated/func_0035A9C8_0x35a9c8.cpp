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

// Function: func_0035A9C8
// Address: 0x35a9c8 - 0x35aa40
void func_0035A9C8_0x35a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A9C8_0x35a9c8");
#endif

    switch (ctx->pc) {
        case 0x35aa20u: goto label_35aa20;
        default: break;
    }

    ctx->pc = 0x35a9c8u;

    // 0x35a9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35a9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35a9cc: 0x24830118  addiu       $v1, $a0, 0x118
    ctx->pc = 0x35a9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 280));
    // 0x35a9d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a9d4: 0x248400ec  addiu       $a0, $a0, 0xEC
    ctx->pc = 0x35a9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 236));
    // 0x35a9d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35a9dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35a9e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35A9E0u;
    {
        const bool branch_taken_0x35a9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9E0u;
        // 0x35a9e4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9e0) {
            ctx->pc = 0x35A9F8u;
            goto label_35a9f8;
        }
    }
    ctx->pc = 0x35A9E8u;
    // 0x35a9e8: 0x8c660028  lw          $a2, 0x28($v1)
    ctx->pc = 0x35a9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x35a9ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35A9ECu;
    {
        const bool branch_taken_0x35a9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9ECu;
        // 0x35a9f0: 0x8c700024  lw          $s0, 0x24($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9ec) {
            ctx->pc = 0x35AA18u;
            goto label_35aa18;
        }
    }
    ctx->pc = 0x35A9F4u;
    // 0x35a9f4: 0x0  nop
    ctx->pc = 0x35a9f4u;
    // NOP
label_35a9f8:
    // 0x35a9f8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x35a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x35a9fc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35A9FCu;
    {
        const bool branch_taken_0x35a9fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x35AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A9FCu;
        // 0x35aa00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a9fc) {
            ctx->pc = 0x35AA10u;
            goto label_35aa10;
        }
    }
    ctx->pc = 0x35AA04u;
    // 0x35aa04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35AA04u;
    {
        const bool branch_taken_0x35aa04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA04u;
        // 0x35aa08: 0x8c860028  lw          $a2, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa04) {
            ctx->pc = 0x35AA18u;
            goto label_35aa18;
        }
    }
    ctx->pc = 0x35AA0Cu;
    // 0x35aa0c: 0x0  nop
    ctx->pc = 0x35aa0cu;
    // NOP
label_35aa10:
    // 0x35aa10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x35AA10u;
    {
        const bool branch_taken_0x35aa10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA10u;
        // 0x35aa14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35aa10) {
            ctx->pc = 0x35AA30u;
            goto label_35aa30;
        }
    }
    ctx->pc = 0x35AA18u;
label_35aa18:
    // 0x35aa18: 0xc0db248  jal         func_36C920
    ctx->pc = 0x35AA18u;
    SET_GPR_U32(ctx, 31, 0x35AA20u);
    ctx->pc = 0x35AA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AA18u;
    // 0x35aa1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x35AA18u, 0x35AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AA20u;
label_35aa20:
    // 0x35aa20: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x35aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x35aa24: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x35aa24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x35aa28: 0xac70e314  sw          $s0, -0x1CEC($v1)
    ctx->pc = 0x35aa28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x3EE314u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE314u, _value); } while (0);
    // 0x35aa2c: 0xac82e318  sw          $v0, -0x1CE8($a0)
    ctx->pc = 0x35aa2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EE318u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EE318u, _value); } while (0);
label_35aa30:
    // 0x35aa30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35aa30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35aa34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35aa34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35aa38: 0x3e00008  jr          $ra
    ctx->pc = 0x35AA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AA38u;
        // 0x35aa3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AA40u;
}
