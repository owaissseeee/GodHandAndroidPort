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

// Function: cSeData_MakeFileName
// Address: 0x2cfe68 - 0x2cff30
void cSeData_MakeFileName_0x2cfe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_MakeFileName_0x2cfe68");
#endif

    switch (ctx->pc) {
        case 0x2cfed8u: goto label_2cfed8;
        case 0x2cfefcu: goto label_2cfefc;
        case 0x2cff20u: goto label_2cff20;
        default: break;
    }

    ctx->pc = 0x2cfe68u;

    // 0x2cfe68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cfe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cfe6c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x2cfe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2cfe70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfe74: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x2cfe74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x2cfe78: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x2CFE78u;
    {
        const bool branch_taken_0x2cfe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE78u;
        // 0x2cfe7c: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfe78) {
            ctx->pc = 0x2CFF20u;
            goto label_2cff20;
        }
    }
    ctx->pc = 0x2CFE80u;
    // 0x2cfe80: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2cfe84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2cfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2cfe88: 0x2442d020  addiu       $v0, $v0, -0x2FE0
    ctx->pc = 0x2cfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955040));
    // 0x2cfe8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cfe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cfe90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2cfe90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfe94: 0x800008  jr          $a0
    ctx->pc = 0x2CFE94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CFE9Cu: goto label_2cfe9c;
            case 0x2CFEB0u: goto label_2cfeb0;
            case 0x2CFEE0u: goto label_2cfee0;
            case 0x2CFF04u: goto label_2cff04;
            case 0x2CFF20u: goto label_2cff20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2CFE9Cu;
label_2cfe9c:
    // 0x2cfe9c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cfea0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cfea4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2cfea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfea8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2CFEA8u;
    {
        const bool branch_taken_0x2cfea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEA8u;
        // 0x2cfeac: 0x8c46310c  lw          $a2, 0x310C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfea8) {
            ctx->pc = 0x2CFEF0u;
            goto label_2cfef0;
        }
    }
    ctx->pc = 0x2CFEB0u;
label_2cfeb0:
    // 0x2cfeb0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cfeb4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2cfeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cfeb8: 0x24423100  addiu       $v0, $v0, 0x3100
    ctx->pc = 0x2cfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12544));
    // 0x2cfebc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cfebcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cfec0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2cfec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cfec4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2cfec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfec8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2cfec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cfecc: 0x24a5d018  addiu       $a1, $a1, -0x2FE8
    ctx->pc = 0x2cfeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955032));
    // 0x2cfed0: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2CFED0u;
    SET_GPR_U32(ctx, 31, 0x2CFED8u);
    ctx->pc = 0x2CFED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFED0u;
    // 0x2cfed4: 0x31070fff  andi        $a3, $t0, 0xFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4095);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2CFED0u, 0x2CFED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFED8u;
label_2cfed8:
    // 0x2cfed8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2CFED8u;
    {
        const bool branch_taken_0x2cfed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFED8u;
        // 0x2cfedc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfed8) {
            ctx->pc = 0x2CFF24u;
            goto label_2cff24;
        }
    }
    ctx->pc = 0x2CFEE0u;
label_2cfee0:
    // 0x2cfee0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cfee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cfee4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cfee4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cfee8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2cfee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfeec: 0x8c463104  lw          $a2, 0x3104($v0)
    ctx->pc = 0x2cfeecu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3104u));
label_2cfef0:
    // 0x2cfef0: 0x24a5d010  addiu       $a1, $a1, -0x2FF0
    ctx->pc = 0x2cfef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
    // 0x2cfef4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2CFEF4u;
    SET_GPR_U32(ctx, 31, 0x2CFEFCu);
    ctx->pc = 0x2CFEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFEF4u;
    // 0x2cfef8: 0x310700ff  andi        $a3, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2CFEF4u, 0x2CFEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFEFCu;
label_2cfefc:
    // 0x2cfefc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFEFCu;
    {
        const bool branch_taken_0x2cfefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFEFCu;
        // 0x2cff00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfefc) {
            ctx->pc = 0x2CFF24u;
            goto label_2cff24;
        }
    }
    ctx->pc = 0x2CFF04u;
label_2cff04:
    // 0x2cff04: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cff08: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2cff08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2cff0c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2cff0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff10: 0x8c463118  lw          $a2, 0x3118($v0)
    ctx->pc = 0x2cff10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3118u));
    // 0x2cff14: 0x24a5d010  addiu       $a1, $a1, -0x2FF0
    ctx->pc = 0x2cff14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955024));
    // 0x2cff18: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2CFF18u;
    SET_GPR_U32(ctx, 31, 0x2CFF20u);
    ctx->pc = 0x2CFF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFF18u;
    // 0x2cff1c: 0x310700ff  andi        $a3, $t0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2CFF18u, 0x2CFF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFF20u;
label_2cff20:
    // 0x2cff20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cff24:
    // 0x2cff24: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFF24u;
        // 0x2cff28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFF2Cu;
    // 0x2cff2c: 0x0  nop
    ctx->pc = 0x2cff2cu;
    // NOP
    ctx->pc = 0x2cff30u;
}
