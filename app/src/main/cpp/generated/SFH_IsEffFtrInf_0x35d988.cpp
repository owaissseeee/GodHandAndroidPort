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

// Function: SFH_IsEffFtrInf
// Address: 0x35d988 - 0x35da58
void SFH_IsEffFtrInf_0x35d988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SFH_IsEffFtrInf_0x35d988");
#endif

    switch (ctx->pc) {
        case 0x35d9c4u: goto label_35d9c4;
        case 0x35d9f8u: goto label_35d9f8;
        case 0x35da10u: goto label_35da10;
        case 0x35da20u: goto label_35da20;
        case 0x35da38u: goto label_35da38;
        default: break;
    }

    ctx->pc = 0x35d988u;

    // 0x35d988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35d988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35d98c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d98cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d990: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d994: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35d994u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35d998: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35d99c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35d99cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35d9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35d9a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35d9a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35d9ac: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x35d9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x35d9b0: 0x2863006e  slti        $v1, $v1, 0x6E
    ctx->pc = 0x35d9b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)110) ? 1 : 0);
    // 0x35d9b4: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x35D9B4u;
    {
        const bool branch_taken_0x35d9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9B4u;
        // 0x35d9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9b4) {
            ctx->pc = 0x35DA40u;
            goto label_35da40;
        }
    }
    ctx->pc = 0x35D9BCu;
    // 0x35d9bc: 0xc0d7a7a  jal         func_35E9E8
    ctx->pc = 0x35D9BCu;
    SET_GPR_U32(ctx, 31, 0x35D9C4u);
    ctx->pc = 0x35E9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9E8u, 0x35D9BCu, 0x35D9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D9C4u;
label_35d9c4:
    // 0x35d9c4: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x35d9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x35d9c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35d9c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9cc: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x35d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x35d9d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35d9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9d4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35D9D4u;
    {
        const bool branch_taken_0x35d9d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x35D9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9D4u;
        // 0x35d9d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9d4) {
            ctx->pc = 0x35D9F0u;
            goto label_35d9f0;
        }
    }
    ctx->pc = 0x35D9DCu;
    // 0x35d9dc: 0x1066000e  beq         $v1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x35D9DCu;
    {
        const bool branch_taken_0x35d9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x35D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9DCu;
        // 0x35d9e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9dc) {
            ctx->pc = 0x35DA18u;
            goto label_35da18;
        }
    }
    ctx->pc = 0x35D9E4u;
    // 0x35d9e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x35D9E4u;
    {
        const bool branch_taken_0x35d9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D9E4u;
        // 0x35d9e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d9e4) {
            ctx->pc = 0x35DA44u;
            goto label_35da44;
        }
    }
    ctx->pc = 0x35D9ECu;
    // 0x35d9ec: 0x0  nop
    ctx->pc = 0x35d9ecu;
    // NOP
label_35d9f0:
    // 0x35d9f0: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35D9F0u;
    SET_GPR_U32(ctx, 31, 0x35D9F8u);
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35D9F0u, 0x35D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D9F8u;
label_35d9f8:
    // 0x35d9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d9fc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35d9fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da00: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x35DA00u;
    {
        const bool branch_taken_0x35da00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA00u;
        // 0x35da04: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da00) {
            ctx->pc = 0x35DA40u;
            goto label_35da40;
        }
    }
    ctx->pc = 0x35DA08u;
    // 0x35da08: 0xc0d7a5a  jal         func_35E968
    ctx->pc = 0x35DA08u;
    SET_GPR_U32(ctx, 31, 0x35DA10u);
    ctx->pc = 0x35E968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E968u, 0x35DA08u, 0x35DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA10u;
label_35da10:
    // 0x35da10: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x35DA10u;
    {
        const bool branch_taken_0x35da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA10u;
        // 0x35da14: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da10) {
            ctx->pc = 0x35DA3Cu;
            goto label_35da3c;
        }
    }
    ctx->pc = 0x35DA18u;
label_35da18:
    // 0x35da18: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35DA18u;
    SET_GPR_U32(ctx, 31, 0x35DA20u);
    ctx->pc = 0x35DA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35DA18u;
    // 0x35da1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35DA18u, 0x35DA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA20u;
label_35da20:
    // 0x35da20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35da20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35da24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35da28: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x35DA28u;
    {
        const bool branch_taken_0x35da28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA28u;
        // 0x35da2c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35da28) {
            ctx->pc = 0x35DA40u;
            goto label_35da40;
        }
    }
    ctx->pc = 0x35DA30u;
    // 0x35da30: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35DA30u;
    SET_GPR_U32(ctx, 31, 0x35DA38u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35DA30u, 0x35DA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35DA38u;
label_35da38:
    // 0x35da38: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x35da38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_35da3c:
    // 0x35da3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35da3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35da40:
    // 0x35da40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35da40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35da44:
    // 0x35da44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35da44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35da48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35da48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35da4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35da4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35da50: 0x3e00008  jr          $ra
    ctx->pc = 0x35DA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35DA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DA50u;
        // 0x35da54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35DA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35DA58u;
}
