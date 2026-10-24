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

// Function: func_00357AA0
// Address: 0x357aa0 - 0x357c20
void func_00357AA0_0x357aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357AA0_0x357aa0");
#endif

    switch (ctx->pc) {
        case 0x357ac0u: goto label_357ac0;
        case 0x357ad0u: goto label_357ad0;
        case 0x357afcu: goto label_357afc;
        case 0x357b10u: goto label_357b10;
        case 0x357b34u: goto label_357b34;
        case 0x357b48u: goto label_357b48;
        case 0x357b5cu: goto label_357b5c;
        case 0x357b6cu: goto label_357b6c;
        case 0x357b80u: goto label_357b80;
        case 0x357b94u: goto label_357b94;
        case 0x357bacu: goto label_357bac;
        case 0x357bc4u: goto label_357bc4;
        case 0x357bd8u: goto label_357bd8;
        case 0x357c04u: goto label_357c04;
        default: break;
    }

    ctx->pc = 0x357aa0u;

    // 0x357aa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357aa4: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x357aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x357aa8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x357aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x357aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x357aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ab0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x357ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x357ab4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x357ab8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357AB8u;
    SET_GPR_U32(ctx, 31, 0x357AC0u);
    ctx->pc = 0x357ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357AB8u;
    // 0x357abc: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357AB8u, 0x357AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357AC0u;
label_357ac0:
    // 0x357ac0: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x357AC0u;
    {
        const bool branch_taken_0x357ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357AC0u;
        // 0x357ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ac0) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357AC8u;
    // 0x357ac8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357AC8u;
    SET_GPR_U32(ctx, 31, 0x357AD0u);
    ctx->pc = 0x357ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357AC8u;
    // 0x357acc: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357AC8u, 0x357AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357AD0u;
label_357ad0:
    // 0x357ad0: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x357AD0u;
    {
        const bool branch_taken_0x357ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ad0) {
            ctx->pc = 0x357AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357AD0u;
            // 0x357ad4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357C0Cu;
            goto label_357c0c;
        }
    }
    ctx->pc = 0x357AD8u;
    // 0x357ad8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x357ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x357adc: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x357ADCu;
    {
        const bool branch_taken_0x357adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x357AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357ADCu;
        // 0x357ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357adc) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357AE4u;
    // 0x357ae4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x357ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x357ae8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x357ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x357aec: 0x54830047  bnel        $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x357AECu;
    {
        const bool branch_taken_0x357aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x357aec) {
            ctx->pc = 0x357AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357AECu;
            // 0x357af0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357C0Cu;
            goto label_357c0c;
        }
    }
    ctx->pc = 0x357AF4u;
    // 0x357af4: 0xc0d5f40  jal         func_357D00
    ctx->pc = 0x357AF4u;
    SET_GPR_U32(ctx, 31, 0x357AFCu);
    ctx->pc = 0x357AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357AF4u;
    // 0x357af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357D00u, 0x357AF4u, 0x357AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357AFCu;
label_357afc:
    // 0x357afc: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x357AFCu;
    {
        const bool branch_taken_0x357afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357afc) {
            ctx->pc = 0x357B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357AFCu;
            // 0x357b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357B04u;
    // 0x357b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b08: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357B08u;
    SET_GPR_U32(ctx, 31, 0x357B10u);
    ctx->pc = 0x357B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B08u;
    // 0x357b0c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357B08u, 0x357B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B10u;
label_357b10:
    // 0x357b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357b14: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357B14u;
    {
        const bool branch_taken_0x357b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x357B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B14u;
        // 0x357b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b14) {
            ctx->pc = 0x357B2Cu;
            goto label_357b2c;
        }
    }
    ctx->pc = 0x357B1Cu;
    // 0x357b1c: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x357b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x357b20: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x357B20u;
    {
        const bool branch_taken_0x357b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B20u;
        // 0x357b24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b20) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357B28u;
    // 0x357b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357b2c:
    // 0x357b2c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357B2Cu;
    SET_GPR_U32(ctx, 31, 0x357B34u);
    ctx->pc = 0x357B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B2Cu;
    // 0x357b30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357B2Cu, 0x357B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B34u;
label_357b34:
    // 0x357b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357b38: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x357B38u;
    {
        const bool branch_taken_0x357b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x357B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B38u;
        // 0x357b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b38) {
            ctx->pc = 0x357B54u;
            goto label_357b54;
        }
    }
    ctx->pc = 0x357B40u;
    // 0x357b40: 0xc0d32b4  jal         func_34CAD0
    ctx->pc = 0x357B40u;
    SET_GPR_U32(ctx, 31, 0x357B48u);
    ctx->pc = 0x357B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B40u;
    // 0x357b44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAD0u, 0x357B40u, 0x357B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B48u;
label_357b48:
    // 0x357b48: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x357B48u;
    {
        const bool branch_taken_0x357b48 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x357B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B48u;
        // 0x357b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b48) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357B50u;
    // 0x357b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357b54:
    // 0x357b54: 0xc0d70e0  jal         func_35C380
    ctx->pc = 0x357B54u;
    SET_GPR_U32(ctx, 31, 0x357B5Cu);
    ctx->pc = 0x357B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B54u;
    // 0x357b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C380u, 0x357B54u, 0x357B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B5Cu;
label_357b5c:
    // 0x357b5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357B5Cu;
    {
        const bool branch_taken_0x357b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x357B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B5Cu;
        // 0x357b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b5c) {
            ctx->pc = 0x357B74u;
            goto label_357b74;
        }
    }
    ctx->pc = 0x357B64u;
    // 0x357b64: 0xc0d32b4  jal         func_34CAD0
    ctx->pc = 0x357B64u;
    SET_GPR_U32(ctx, 31, 0x357B6Cu);
    ctx->pc = 0x357B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B64u;
    // 0x357b68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAD0u, 0x357B64u, 0x357B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B6Cu;
label_357b6c:
    // 0x357b6c: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x357B6Cu;
    {
        const bool branch_taken_0x357b6c = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x357B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B6Cu;
        // 0x357b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b6c) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357B74u;
label_357b74:
    // 0x357b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357b78: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357B78u;
    SET_GPR_U32(ctx, 31, 0x357B80u);
    ctx->pc = 0x357B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B78u;
    // 0x357b7c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357B78u, 0x357B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B80u;
label_357b80:
    // 0x357b80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357b84: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x357B84u;
    {
        const bool branch_taken_0x357b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x357b84) {
            ctx->pc = 0x357B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357B84u;
            // 0x357b88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357BA0u;
            goto label_357ba0;
        }
    }
    ctx->pc = 0x357B8Cu;
    // 0x357b8c: 0xc0d5f68  jal         func_357DA0
    ctx->pc = 0x357B8Cu;
    SET_GPR_U32(ctx, 31, 0x357B94u);
    ctx->pc = 0x357B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357B8Cu;
    // 0x357b90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357DA0u, 0x357B8Cu, 0x357B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357B94u;
label_357b94:
    // 0x357b94: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x357B94u;
    {
        const bool branch_taken_0x357b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357B94u;
        // 0x357b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357b94) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357B9Cu;
    // 0x357b9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357ba0:
    // 0x357ba0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x357ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x357ba4: 0xc0d6ae6  jal         func_35AB98
    ctx->pc = 0x357BA4u;
    SET_GPR_U32(ctx, 31, 0x357BACu);
    ctx->pc = 0x357BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BA4u;
    // 0x357ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x357BA4u, 0x357BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BACu;
label_357bac:
    // 0x357bac: 0x26030d30  addiu       $v1, $s0, 0xD30
    ctx->pc = 0x357bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x357bb0: 0x8c710288  lw          $s1, 0x288($v1)
    ctx->pc = 0x357bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x357bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bb8: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x357bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x357bbc: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357BBCu;
    SET_GPR_U32(ctx, 31, 0x357BC4u);
    ctx->pc = 0x357BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BBCu;
    // 0x357bc0: 0x8c700284  lw          $s0, 0x284($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357BBCu, 0x357BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BC4u;
label_357bc4:
    // 0x357bc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x357bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bc8: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x357bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x357bcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bd0: 0xc0db248  jal         func_36C920
    ctx->pc = 0x357BD0u;
    SET_GPR_U32(ctx, 31, 0x357BD8u);
    ctx->pc = 0x357BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BD0u;
    // 0x357bd4: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x357BD0u, 0x357BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357BD8u;
label_357bd8:
    // 0x357bd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x357bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357bdc: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357BDCu;
    {
        const bool branch_taken_0x357bdc = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x357BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357BDCu;
        // 0x357be0: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357bdc) {
            ctx->pc = 0x357BECu;
            goto label_357bec;
        }
    }
    ctx->pc = 0x357BE4u;
    // 0x357be4: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x357BE4u;
    {
        const bool branch_taken_0x357be4 = (GPR_S64(ctx, 16) > 0);
        ctx->pc = 0x357BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357BE4u;
        // 0x357be8: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357be4) {
            ctx->pc = 0x357BF8u;
            goto label_357bf8;
        }
    }
    ctx->pc = 0x357BECu;
label_357bec:
    // 0x357bec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x357BECu;
    {
        const bool branch_taken_0x357bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357BECu;
        // 0x357bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357bec) {
            ctx->pc = 0x357C08u;
            goto label_357c08;
        }
    }
    ctx->pc = 0x357BF4u;
    // 0x357bf4: 0x0  nop
    ctx->pc = 0x357bf4u;
    // NOP
label_357bf8:
    // 0x357bf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x357bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357bfc: 0xc0d6bb2  jal         func_35AEC8
    ctx->pc = 0x357BFCu;
    SET_GPR_U32(ctx, 31, 0x357C04u);
    ctx->pc = 0x357C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357BFCu;
    // 0x357c00: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AEC8u, 0x357BFCu, 0x357C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C04u;
label_357c04:
    // 0x357c04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x357c04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_357c08:
    // 0x357c08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x357c08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_357c0c:
    // 0x357c0c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x357c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357c10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357c14: 0x3e00008  jr          $ra
    ctx->pc = 0x357C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C14u;
        // 0x357c18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357C1Cu;
    // 0x357c1c: 0x0  nop
    ctx->pc = 0x357c1cu;
    // NOP
    ctx->pc = 0x357c20u;
}
