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

// Function: func_00294F70
// Address: 0x294f70 - 0x2951b0
void func_00294F70_0x294f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00294F70_0x294f70");
#endif

    switch (ctx->pc) {
        case 0x294ff4u: goto label_294ff4;
        case 0x295024u: goto label_295024;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950e8u: goto label_2950e8;
        case 0x29510cu: goto label_29510c;
        case 0x295124u: goto label_295124;
        case 0x295150u: goto label_295150;
        case 0x295164u: goto label_295164;
        case 0x295188u: goto label_295188;
        case 0x29519cu: goto label_29519c;
        default: break;
    }

    ctx->pc = 0x294f70u;

    // 0x294f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294f74: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x294f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x294f78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x294f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x294f7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x294f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294f84: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x294f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294f88: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x294f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x294f8c: 0x24030506  addiu       $v1, $zero, 0x506
    ctx->pc = 0x294f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1286));
    // 0x294f90: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x294f90u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x294f94: 0x10830081  beq         $a0, $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x294F94u;
    {
        const bool branch_taken_0x294f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x294F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294F94u;
        // 0x294f98: 0x24020220  addiu       $v0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f94) {
            ctx->pc = 0x29519Cu;
            goto label_29519c;
        }
    }
    ctx->pc = 0x294F9Cu;
    // 0x294f9c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x294f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x294fa0: 0x10820018  beq         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x294FA0u;
    {
        const bool branch_taken_0x294fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x294FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FA0u;
        // 0x294fa4: 0x28820221  slti        $v0, $a0, 0x221 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)545) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fa0) {
            ctx->pc = 0x295004u;
            goto label_295004;
        }
    }
    ctx->pc = 0x294FA8u;
    // 0x294fa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294FA8u;
    {
        const bool branch_taken_0x294fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FA8u;
        // 0x294fac: 0x24020209  addiu       $v0, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fa8) {
            ctx->pc = 0x294FC0u;
            goto label_294fc0;
        }
    }
    ctx->pc = 0x294FB0u;
    // 0x294fb0: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x294FB0u;
    {
        const bool branch_taken_0x294fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x294FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FB0u;
        // 0x294fb4: 0x24c274a0  addiu       $v0, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fb0) {
            ctx->pc = 0x294FD4u;
            goto label_294fd4;
        }
    }
    ctx->pc = 0x294FB8u;
    // 0x294fb8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x294FB8u;
    {
        const bool branch_taken_0x294fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FB8u;
        // 0x294fbc: 0x24030604  addiu       $v1, $zero, 0x604 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fb8) {
            ctx->pc = 0x295034u;
            goto label_295034;
        }
    }
    ctx->pc = 0x294FC0u;
label_294fc0:
    // 0x294fc0: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x294fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x294fc4: 0x1082005a  beq         $a0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x294FC4u;
    {
        const bool branch_taken_0x294fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x294FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FC4u;
        // 0x294fc8: 0x24c274a0  addiu       $v0, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fc4) {
            ctx->pc = 0x295130u;
            goto label_295130;
        }
    }
    ctx->pc = 0x294FCCu;
    // 0x294fcc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x294FCCu;
    {
        const bool branch_taken_0x294fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FCCu;
        // 0x294fd0: 0x24030604  addiu       $v1, $zero, 0x604 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1540));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fcc) {
            ctx->pc = 0x295034u;
            goto label_295034;
        }
    }
    ctx->pc = 0x294FD4u;
label_294fd4:
    // 0x294fd4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x294fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x294fd8: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x294fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x294fdc: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x294fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x294fe0: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x294fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x294fe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294fe8: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x294fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x294fec: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x294FECu;
    SET_GPR_U32(ctx, 31, 0x294FF4u);
    ctx->pc = 0x294FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294FECu;
    // 0x294ff0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x294FECu, 0x294FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294FF4u;
label_294ff4:
    // 0x294ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x294ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294ff8: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x294ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x294ffc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x294FFCu;
    {
        const bool branch_taken_0x294ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294FFCu;
        // 0x295000: 0x24060209  addiu       $a2, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ffc) {
            ctx->pc = 0x29515Cu;
            goto label_29515c;
        }
    }
    ctx->pc = 0x295004u;
label_295004:
    // 0x295004: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x295004u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x295008: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x295008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x29500c: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x29500cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x295010: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x295014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295018: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x29501c: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x29501Cu;
    SET_GPR_U32(ctx, 31, 0x295024u);
    ctx->pc = 0x295020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29501Cu;
    // 0x295020: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x29501Cu, 0x295024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295024u;
label_295024:
    // 0x295024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295028: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x295028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x29502c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x29502Cu;
    {
        const bool branch_taken_0x29502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29502Cu;
        // 0x295030: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29502c) {
            ctx->pc = 0x29515Cu;
            goto label_29515c;
        }
    }
    ctx->pc = 0x295034u;
label_295034:
    // 0x295034: 0x944405b0  lhu         $a0, 0x5B0($v0)
    ctx->pc = 0x295034u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x295038: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x295038u;
    {
        const bool branch_taken_0x295038 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x29503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295038u;
        // 0x29503c: 0x28820605  slti        $v0, $a0, 0x605 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1541) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295038) {
            ctx->pc = 0x2950C8u;
            goto label_2950c8;
        }
    }
    ctx->pc = 0x295040u;
    // 0x295040: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x295040u;
    {
        const bool branch_taken_0x295040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295040u;
        // 0x295044: 0x24020409  addiu       $v0, $zero, 0x409 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295040) {
            ctx->pc = 0x295060u;
            goto label_295060;
        }
    }
    ctx->pc = 0x295048u;
    // 0x295048: 0x10820039  beq         $a0, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x295048u;
    {
        const bool branch_taken_0x295048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29504Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295048u;
        // 0x29504c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295048) {
            ctx->pc = 0x295130u;
            goto label_295130;
        }
    }
    ctx->pc = 0x295050u;
    // 0x295050: 0x1082001d  beq         $a0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x295050u;
    {
        const bool branch_taken_0x295050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x295054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295050u;
        // 0x295054: 0x24c374a0  addiu       $v1, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295050) {
            ctx->pc = 0x2950C8u;
            goto label_2950c8;
        }
    }
    ctx->pc = 0x295058u;
    // 0x295058: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x295058u;
    {
        const bool branch_taken_0x295058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295058u;
        // 0x29505c: 0x906205b1  lbu         $v0, 0x5B1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1457)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295058) {
            ctx->pc = 0x2950F8u;
            goto label_2950f8;
        }
    }
    ctx->pc = 0x295060u;
label_295060:
    // 0x295060: 0x24020801  addiu       $v0, $zero, 0x801
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
    // 0x295064: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x295064u;
    {
        const bool branch_taken_0x295064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x295068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295064u;
        // 0x295068: 0x28820802  slti        $v0, $a0, 0x802 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2050) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x295064) {
            ctx->pc = 0x295098u;
            goto label_295098;
        }
    }
    ctx->pc = 0x29506Cu;
    // 0x29506c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29506Cu;
    {
        const bool branch_taken_0x29506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29506Cu;
        // 0x295070: 0x24020702  addiu       $v0, $zero, 0x702 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1794));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29506c) {
            ctx->pc = 0x295084u;
            goto label_295084;
        }
    }
    ctx->pc = 0x295074u;
    // 0x295074: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x295074u;
    {
        const bool branch_taken_0x295074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x295078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295074u;
        // 0x295078: 0x24c374a0  addiu       $v1, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295074) {
            ctx->pc = 0x2950C8u;
            goto label_2950c8;
        }
    }
    ctx->pc = 0x29507Cu;
    // 0x29507c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x29507Cu;
    {
        const bool branch_taken_0x29507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29507Cu;
        // 0x295080: 0x906205b1  lbu         $v0, 0x5B1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1457)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29507c) {
            ctx->pc = 0x2950F8u;
            goto label_2950f8;
        }
    }
    ctx->pc = 0x295084u;
label_295084:
    // 0x295084: 0x24020802  addiu       $v0, $zero, 0x802
    ctx->pc = 0x295084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x295088: 0x10820029  beq         $a0, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x295088u;
    {
        const bool branch_taken_0x295088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x29508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295088u;
        // 0x29508c: 0x24c374a0  addiu       $v1, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295088) {
            ctx->pc = 0x295130u;
            goto label_295130;
        }
    }
    ctx->pc = 0x295090u;
    // 0x295090: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x295090u;
    {
        const bool branch_taken_0x295090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295090u;
        // 0x295094: 0x906205b1  lbu         $v0, 0x5B1($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1457)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295090) {
            ctx->pc = 0x2950F8u;
            goto label_2950f8;
        }
    }
    ctx->pc = 0x295098u;
label_295098:
    // 0x295098: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x295098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x29509c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x29509cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2950a0: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x2950a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x2950a4: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x2950a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x2950a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2950a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950ac: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x2950acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x2950b0: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x2950B0u;
    SET_GPR_U32(ctx, 31, 0x2950B8u);
    ctx->pc = 0x2950B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950B0u;
    // 0x2950b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x2950B0u, 0x2950B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950B8u;
label_2950b8:
    // 0x2950b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2950b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950bc: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x2950bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x2950c0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2950C0u;
    {
        const bool branch_taken_0x2950c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950C0u;
        // 0x2950c4: 0x24060220  addiu       $a2, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950c0) {
            ctx->pc = 0x29515Cu;
            goto label_29515c;
        }
    }
    ctx->pc = 0x2950C8u;
label_2950c8:
    // 0x2950c8: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2950c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2950cc: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2950ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2950d0: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x2950d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x2950d4: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x2950d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x2950d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2950d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950dc: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x2950dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2950e0: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x2950E0u;
    SET_GPR_U32(ctx, 31, 0x2950E8u);
    ctx->pc = 0x2950E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2950E0u;
    // 0x2950e4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x2950E0u, 0x2950E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2950E8u;
label_2950e8:
    // 0x2950e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2950e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2950ec: 0x24050209  addiu       $a1, $zero, 0x209
    ctx->pc = 0x2950ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
    // 0x2950f0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2950F0u;
    {
        const bool branch_taken_0x2950f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2950F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950F0u;
        // 0x2950f4: 0x24060209  addiu       $a2, $zero, 0x209 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 521));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950f0) {
            ctx->pc = 0x29515Cu;
            goto label_29515c;
        }
    }
    ctx->pc = 0x2950F8u;
label_2950f8:
    // 0x2950f8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x2950f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2950fc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2950FCu;
    {
        const bool branch_taken_0x2950fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2950FCu;
        // 0x295100: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950fc) {
            ctx->pc = 0x29516Cu;
            goto label_29516c;
        }
    }
    ctx->pc = 0x295104u;
    // 0x295104: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x295104u;
    SET_GPR_U32(ctx, 31, 0x29510Cu);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x295104u, 0x29510Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29510Cu;
label_29510c:
    // 0x29510c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x29510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x295110: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x295110u;
    {
        const bool branch_taken_0x295110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295110u;
        // 0x295114: 0x3c060075  lui         $a2, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295110) {
            ctx->pc = 0x295170u;
            goto label_295170;
        }
    }
    ctx->pc = 0x295118u;
    // 0x295118: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x295118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x29511c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x29511Cu;
    SET_GPR_U32(ctx, 31, 0x295124u);
    ctx->pc = 0x295120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29511Cu;
    // 0x295120: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x29511Cu, 0x295124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295124u;
label_295124:
    // 0x295124: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x295124u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x295128: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x295128u;
    {
        const bool branch_taken_0x295128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295128u;
        // 0x29512c: 0x3c100058  lui         $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295128) {
            ctx->pc = 0x29516Cu;
            goto label_29516c;
        }
    }
    ctx->pc = 0x295130u;
label_295130:
    // 0x295130: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x295130u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x295134: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x295134u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x295138: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x295138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x29513c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x29513cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x295140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295144: 0x24050223  addiu       $a1, $zero, 0x223
    ctx->pc = 0x295144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x295148: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x295148u;
    SET_GPR_U32(ctx, 31, 0x295150u);
    ctx->pc = 0x29514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295148u;
    // 0x29514c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x295148u, 0x295150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295150u;
label_295150:
    // 0x295150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295154: 0x24050223  addiu       $a1, $zero, 0x223
    ctx->pc = 0x295154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
    // 0x295158: 0x24060223  addiu       $a2, $zero, 0x223
    ctx->pc = 0x295158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
label_29515c:
    // 0x29515c: 0xc07faa8  jal         func_1FEAA0
    ctx->pc = 0x29515Cu;
    SET_GPR_U32(ctx, 31, 0x295164u);
    ctx->pc = 0x295160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29515Cu;
    // 0x295160: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAA0u, 0x29515Cu, 0x295164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295164u;
label_295164:
    // 0x295164: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x295164u;
    {
        const bool branch_taken_0x295164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295164u;
        // 0x295168: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295164) {
            ctx->pc = 0x2951A0u;
            goto label_2951a0;
        }
    }
    ctx->pc = 0x29516Cu;
label_29516c:
    // 0x29516c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x29516cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
label_295170:
    // 0x295170: 0x261064e0  addiu       $s0, $s0, 0x64E0
    ctx->pc = 0x295170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25824));
    // 0x295174: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x295178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29517c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x295180: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x295180u;
    SET_GPR_U32(ctx, 31, 0x295188u);
    ctx->pc = 0x295184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295180u;
    // 0x295184: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x295180u, 0x295188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295188u;
label_295188:
    // 0x295188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29518c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x29518cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x295190: 0x24060220  addiu       $a2, $zero, 0x220
    ctx->pc = 0x295190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    // 0x295194: 0xc07faa8  jal         func_1FEAA0
    ctx->pc = 0x295194u;
    SET_GPR_U32(ctx, 31, 0x29519Cu);
    ctx->pc = 0x295198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295194u;
    // 0x295198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEAA0u, 0x295194u, 0x29519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29519Cu;
label_29519c:
    // 0x29519c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29519cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2951a0:
    // 0x2951a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2951a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2951a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2951A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2951A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2951A4u;
        // 0x2951a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2951A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2951ACu;
    // 0x2951ac: 0x0  nop
    ctx->pc = 0x2951acu;
    // NOP
    ctx->pc = 0x2951b0u;
}
