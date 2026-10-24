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

// Function: func_0037A9C8
// Address: 0x37a9c8 - 0x37aab0
void func_0037A9C8_0x37a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A9C8_0x37a9c8");
#endif

    ctx->pc = 0x37a9c8u;

    // 0x37a9c8: 0x90820025  lbu         $v0, 0x25($a0)
    ctx->pc = 0x37a9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x37a9cc: 0x2485009c  addiu       $a1, $a0, 0x9C
    ctx->pc = 0x37a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 156));
    // 0x37a9d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x37a9d4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x37a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x37a9d8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x37a9d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37a9dc: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x37a9dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x37a9e0: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x37A9E0u;
    {
        const bool branch_taken_0x37a9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A9E0u;
        // 0x37a9e4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a9e0) {
            ctx->pc = 0x37AAA8u;
            goto label_37aaa8;
        }
    }
    ctx->pc = 0x37A9E8u;
    // 0x37a9e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x37a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x37a9ec: 0x2442baf0  addiu       $v0, $v0, -0x4510
    ctx->pc = 0x37a9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949616));
    // 0x37a9f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a9f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x37a9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37a9f8: 0x800008  jr          $a0
    ctx->pc = 0x37A9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x37AA00u: goto label_37aa00;
            case 0x37AA28u: goto label_37aa28;
            case 0x37AA44u: goto label_37aa44;
            case 0x37AA60u: goto label_37aa60;
            case 0x37AA84u: goto label_37aa84;
            case 0x37AAA8u: goto label_37aaa8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A9F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x37AA00u;
label_37aa00:
    // 0x37aa00: 0x80a3001e  lb          $v1, 0x1E($a1)
    ctx->pc = 0x37aa00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x37aa04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x37aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37aa08: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AA08u;
    {
        const bool branch_taken_0x37aa08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA08u;
        // 0x37aa0c: 0x94a2000e  lhu         $v0, 0xE($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa08) {
            ctx->pc = 0x37AA1Cu;
            goto label_37aa1c;
        }
    }
    ctx->pc = 0x37AA10u;
    // 0x37aa10: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x37aa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x37aa14: 0x3e00008  jr          $ra
    ctx->pc = 0x37AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA14u;
        // 0x37aa18: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AA1Cu;
label_37aa1c:
    // 0x37aa1c: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x37aa1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x37aa20: 0x3e00008  jr          $ra
    ctx->pc = 0x37AA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA20u;
        // 0x37aa24: 0xa4a2000e  sh          $v0, 0xE($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 14), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AA28u;
label_37aa28:
    // 0x37aa28: 0x84a30018  lh          $v1, 0x18($a1)
    ctx->pc = 0x37aa28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x37aa2c: 0x84a2001a  lh          $v0, 0x1A($a1)
    ctx->pc = 0x37aa2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x37aa30: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x37aa30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37aa34: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x37AA34u;
    {
        const bool branch_taken_0x37aa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA34u;
        // 0x37aa38: 0x94a40018  lhu         $a0, 0x18($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa34) {
            ctx->pc = 0x37AAA8u;
            goto label_37aaa8;
        }
    }
    ctx->pc = 0x37AA3Cu;
    // 0x37aa3c: 0x3e00008  jr          $ra
    ctx->pc = 0x37AA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA3Cu;
        // 0x37aa40: 0xa4a4001a  sh          $a0, 0x1A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 26), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AA44u;
label_37aa44:
    // 0x37aa44: 0x84a2001a  lh          $v0, 0x1A($a1)
    ctx->pc = 0x37aa44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x37aa48: 0x84a30018  lh          $v1, 0x18($a1)
    ctx->pc = 0x37aa48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x37aa4c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x37aa4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37aa50: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x37AA50u;
    {
        const bool branch_taken_0x37aa50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA50u;
        // 0x37aa54: 0x94a4001a  lhu         $a0, 0x1A($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa50) {
            ctx->pc = 0x37AAA8u;
            goto label_37aaa8;
        }
    }
    ctx->pc = 0x37AA58u;
    // 0x37aa58: 0x3e00008  jr          $ra
    ctx->pc = 0x37AA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA58u;
        // 0x37aa5c: 0xa4a40018  sh          $a0, 0x18($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AA60u;
label_37aa60:
    // 0x37aa60: 0x80a20006  lb          $v0, 0x6($a1)
    ctx->pc = 0x37aa60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x37aa64: 0x80a30007  lb          $v1, 0x7($a1)
    ctx->pc = 0x37aa64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x37aa68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37aa6c: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x37aa6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x37aa70: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37AA70u;
    {
        const bool branch_taken_0x37aa70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA70u;
        // 0x37aa74: 0x90a40006  lbu         $a0, 0x6($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa70) {
            ctx->pc = 0x37AAA8u;
            goto label_37aaa8;
        }
    }
    ctx->pc = 0x37AA78u;
    // 0x37aa78: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x37aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x37aa7c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37aa80: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x37aa80u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_37aa84:
    // 0x37aa84: 0x80a20006  lb          $v0, 0x6($a1)
    ctx->pc = 0x37aa84u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x37aa88: 0x80a30007  lb          $v1, 0x7($a1)
    ctx->pc = 0x37aa88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x37aa8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37aa90: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x37aa90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x37aa94: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37AA94u;
    {
        const bool branch_taken_0x37aa94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37AA94u;
        // 0x37aa98: 0x90a40007  lbu         $a0, 0x7($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37aa94) {
            ctx->pc = 0x37AAA8u;
            goto label_37aaa8;
        }
    }
    ctx->pc = 0x37AA9Cu;
    // 0x37aa9c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x37aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x37aaa0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x37aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37aaa4: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x37aaa4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_37aaa8:
    // 0x37aaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x37AAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37AAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37AAB0u;
}
