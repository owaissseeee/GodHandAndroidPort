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

// Function: _lo0bits
// Address: 0x38f8c0 - 0x38f980
void _lo0bits_0x38f8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lo0bits_0x38f8c0");
#endif

    ctx->pc = 0x38f8c0u;

    // 0x38f8c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x38f8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38f8c4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x38f8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x38f8c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38F8C8u;
    {
        const bool branch_taken_0x38f8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8C8u;
        // 0x38f8cc: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8c8) {
            ctx->pc = 0x38F904u;
            goto label_38f904;
        }
    }
    ctx->pc = 0x38F8D0u;
    // 0x38f8d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F8D0u;
    {
        const bool branch_taken_0x38f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8D0u;
        // 0x38f8d4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8d0) {
            ctx->pc = 0x38F8E0u;
            goto label_38f8e0;
        }
    }
    ctx->pc = 0x38F8D8u;
    // 0x38f8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38F8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8D8u;
        // 0x38f8dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F8E0u;
label_38f8e0:
    // 0x38f8e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F8E0u;
    {
        const bool branch_taken_0x38f8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38f8e0) {
            ctx->pc = 0x38F8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F8E0u;
            // 0x38f8e4: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F8F8u;
            goto label_38f8f8;
        }
    }
    ctx->pc = 0x38F8E8u;
    // 0x38f8e8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x38f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x38f8ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38f8f0: 0x3e00008  jr          $ra
    ctx->pc = 0x38F8F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8F0u;
        // 0x38f8f4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F8F8u;
label_38f8f8:
    // 0x38f8f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38f8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x38F8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8FCu;
        // 0x38f900: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F904u;
label_38f904:
    // 0x38f904: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x38f904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x38f908: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F908u;
    {
        const bool branch_taken_0x38f908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F908u;
        // 0x38f90c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f908) {
            ctx->pc = 0x38F918u;
            goto label_38f918;
        }
    }
    ctx->pc = 0x38F910u;
    // 0x38f910: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x38f910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38f914: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x38f914u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_38f918:
    // 0x38f918: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x38f918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x38f91c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F91Cu;
    {
        const bool branch_taken_0x38f91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F91Cu;
        // 0x38f920: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f91c) {
            ctx->pc = 0x38F930u;
            goto label_38f930;
        }
    }
    ctx->pc = 0x38F924u;
    // 0x38f924: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x38f924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x38f928: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x38f928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x38f92c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x38f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_38f930:
    // 0x38f930: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F930u;
    {
        const bool branch_taken_0x38f930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F930u;
        // 0x38f934: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f930) {
            ctx->pc = 0x38F944u;
            goto label_38f944;
        }
    }
    ctx->pc = 0x38F938u;
    // 0x38f938: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x38f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x38f93c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x38f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x38f940: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x38f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_38f944:
    // 0x38f944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38F944u;
    {
        const bool branch_taken_0x38f944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F944u;
        // 0x38f948: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f944) {
            ctx->pc = 0x38F958u;
            goto label_38f958;
        }
    }
    ctx->pc = 0x38F94Cu;
    // 0x38f94c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x38f94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x38f950: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x38f950u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x38f954: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x38f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_38f958:
    // 0x38f958: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x38F958u;
    {
        const bool branch_taken_0x38f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f958) {
            ctx->pc = 0x38F95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38F958u;
            // 0x38f95c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38F978u;
            goto label_38f978;
        }
    }
    ctx->pc = 0x38F960u;
    // 0x38f960: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x38f960u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x38f964: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F964u;
    {
        const bool branch_taken_0x38f964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F964u;
        // 0x38f968: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f964) {
            ctx->pc = 0x38F974u;
            goto label_38f974;
        }
    }
    ctx->pc = 0x38F96Cu;
    // 0x38f96c: 0x3e00008  jr          $ra
    ctx->pc = 0x38F96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F96Cu;
        // 0x38f970: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F974u;
label_38f974:
    // 0x38f974: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x38f974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_38f978:
    // 0x38f978: 0x3e00008  jr          $ra
    ctx->pc = 0x38F978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F978u;
        // 0x38f97c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F980u;
}
