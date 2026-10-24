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

// Function: Slot2_UpdateBet
// Address: 0x1e4e28 - 0x1e5268
void Slot2_UpdateBet_0x1e4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_UpdateBet_0x1e4e28");
#endif

    switch (ctx->pc) {
        case 0x1e4e74u: goto label_1e4e74;
        case 0x1e4e80u: goto label_1e4e80;
        case 0x1e4e8cu: goto label_1e4e8c;
        case 0x1e4e98u: goto label_1e4e98;
        case 0x1e4ea4u: goto label_1e4ea4;
        case 0x1e4eb0u: goto label_1e4eb0;
        case 0x1e4ec4u: goto label_1e4ec4;
        case 0x1e4eccu: goto label_1e4ecc;
        case 0x1e4edcu: goto label_1e4edc;
        case 0x1e4eecu: goto label_1e4eec;
        case 0x1e4efcu: goto label_1e4efc;
        case 0x1e4f0cu: goto label_1e4f0c;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e513cu: goto label_1e513c;
        case 0x1e5168u: goto label_1e5168;
        case 0x1e51a8u: goto label_1e51a8;
        case 0x1e5208u: goto label_1e5208;
        case 0x1e5214u: goto label_1e5214;
        default: break;
    }

    ctx->pc = 0x1e4e28u;

    // 0x1e4e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e4e2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4e30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e4e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e4e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4e38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e4e3c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e4e40: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1e4e40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1e4e44: 0x10400103  beqz        $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x1E4E44u;
    {
        const bool branch_taken_0x1e4e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E44u;
        // 0x1e4e48: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e44) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E4E4Cu;
    // 0x1e4e4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e4e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e4e50: 0x2442b900  addiu       $v0, $v0, -0x4700
    ctx->pc = 0x1e4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949120));
    // 0x1e4e54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e4e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e4e58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e4e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4e5c: 0x800008  jr          $a0
    ctx->pc = 0x1E4E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4E64u: goto label_1e4e64;
            case 0x1E4F48u: goto label_1e4f48;
            case 0x1E5178u: goto label_1e5178;
            case 0x1E51BCu: goto label_1e51bc;
            case 0x1E5228u: goto label_1e5228;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4E5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E4E64u;
label_1e4e64:
    // 0x1e4e64: 0x26300400  addiu       $s0, $s1, 0x400
    ctx->pc = 0x1e4e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x1e4e68: 0x8e25036c  lw          $a1, 0x36C($s1)
    ctx->pc = 0x1e4e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
    // 0x1e4e6c: 0xc079e12  jal         func_1E7848
    ctx->pc = 0x1E4E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E4E74u);
    ctx->pc = 0x1E4E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E6Cu;
    // 0x1e4e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7848u, 0x1E4E6Cu, 0x1E4E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E74u;
label_1e4e74:
    // 0x1e4e74: 0x8e250370  lw          $a1, 0x370($s1)
    ctx->pc = 0x1e4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
    // 0x1e4e78: 0xc079e1a  jal         func_1E7868
    ctx->pc = 0x1E4E78u;
    SET_GPR_U32(ctx, 31, 0x1E4E80u);
    ctx->pc = 0x1E4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E78u;
    // 0x1e4e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7868u, 0x1E4E78u, 0x1E4E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E80u;
label_1e4e80:
    // 0x1e4e80: 0x8e250374  lw          $a1, 0x374($s1)
    ctx->pc = 0x1e4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 884)));
    // 0x1e4e84: 0xc079e22  jal         func_1E7888
    ctx->pc = 0x1E4E84u;
    SET_GPR_U32(ctx, 31, 0x1E4E8Cu);
    ctx->pc = 0x1E4E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E84u;
    // 0x1e4e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7888u, 0x1E4E84u, 0x1E4E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E8Cu;
label_1e4e8c:
    // 0x1e4e8c: 0x8e250378  lw          $a1, 0x378($s1)
    ctx->pc = 0x1e4e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 888)));
    // 0x1e4e90: 0xc079e2a  jal         func_1E78A8
    ctx->pc = 0x1E4E90u;
    SET_GPR_U32(ctx, 31, 0x1E4E98u);
    ctx->pc = 0x1E4E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E90u;
    // 0x1e4e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78A8u, 0x1E4E90u, 0x1E4E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E98u;
label_1e4e98:
    // 0x1e4e98: 0x8e25037c  lw          $a1, 0x37C($s1)
    ctx->pc = 0x1e4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 892)));
    // 0x1e4e9c: 0xc079e32  jal         func_1E78C8
    ctx->pc = 0x1E4E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E4EA4u);
    ctx->pc = 0x1E4EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E9Cu;
    // 0x1e4ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78C8u, 0x1E4E9Cu, 0x1E4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EA4u;
label_1e4ea4:
    // 0x1e4ea4: 0x8e250380  lw          $a1, 0x380($s1)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 896)));
    // 0x1e4ea8: 0xc079e3a  jal         func_1E78E8
    ctx->pc = 0x1E4EA8u;
    SET_GPR_U32(ctx, 31, 0x1E4EB0u);
    ctx->pc = 0x1E4EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EA8u;
    // 0x1e4eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E78E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E78E8u, 0x1E4EA8u, 0x1E4EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EB0u;
label_1e4eb0:
    // 0x1e4eb0: 0xa62003d2  sh          $zero, 0x3D2($s1)
    ctx->pc = 0x1e4eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 978), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e4eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4eb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4eb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ebc: 0xc079bb6  jal         func_1E6ED8
    ctx->pc = 0x1E4EBCu;
    SET_GPR_U32(ctx, 31, 0x1E4EC4u);
    ctx->pc = 0x1E4EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EBCu;
    // 0x1e4ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6ED8u, 0x1E4EBCu, 0x1E4EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EC4u;
label_1e4ec4:
    // 0x1e4ec4: 0xc079a92  jal         func_1E6A48
    ctx->pc = 0x1E4EC4u;
    SET_GPR_U32(ctx, 31, 0x1E4ECCu);
    ctx->pc = 0x1E4EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EC4u;
    // 0x1e4ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6A48u, 0x1E4EC4u, 0x1E4ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4ECCu;
label_1e4ecc:
    // 0x1e4ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ed0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ed4: 0xc079adc  jal         func_1E6B70
    ctx->pc = 0x1E4ED4u;
    SET_GPR_U32(ctx, 31, 0x1E4EDCu);
    ctx->pc = 0x1E4ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4ED4u;
    // 0x1e4ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6B70u, 0x1E4ED4u, 0x1E4EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EDCu;
label_1e4edc:
    // 0x1e4edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ee0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ee4: 0xc079b20  jal         func_1E6C80
    ctx->pc = 0x1E4EE4u;
    SET_GPR_U32(ctx, 31, 0x1E4EECu);
    ctx->pc = 0x1E4EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EE4u;
    // 0x1e4ee8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6C80u, 0x1E4EE4u, 0x1E4EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EECu;
label_1e4eec:
    // 0x1e4eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ef4: 0xc079b52  jal         func_1E6D48
    ctx->pc = 0x1E4EF4u;
    SET_GPR_U32(ctx, 31, 0x1E4EFCu);
    ctx->pc = 0x1E4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4EF4u;
    // 0x1e4ef8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6D48u, 0x1E4EF4u, 0x1E4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4EFCu;
label_1e4efc:
    // 0x1e4efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e4efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4f04: 0xc079b84  jal         func_1E6E10
    ctx->pc = 0x1E4F04u;
    SET_GPR_U32(ctx, 31, 0x1E4F0Cu);
    ctx->pc = 0x1E4F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F04u;
    // 0x1e4f08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6E10u, 0x1E4F04u, 0x1E4F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F0Cu;
label_1e4f0c:
    // 0x1e4f0c: 0x26220058  addiu       $v0, $s1, 0x58
    ctx->pc = 0x1e4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x1e4f10: 0x26230140  addiu       $v1, $s1, 0x140
    ctx->pc = 0x1e4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x1e4f14: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e4f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1e4f18: 0x26240228  addiu       $a0, $s1, 0x228
    ctx->pc = 0x1e4f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 552));
    // 0x1e4f1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e4f20: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e4f24: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1e4f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1e4f28: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e4f2c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1e4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x1e4f30: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1e4f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1e4f34: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1e4f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1e4f38: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1e4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1e4f3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e4f40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e4f44: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e4f48:
    // 0x1e4f48: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1e4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1e4f4c: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x1e4f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x1e4f50: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1e4f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1e4f54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E4F54u;
    {
        const bool branch_taken_0x1e4f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F54u;
        // 0x1e4f58: 0x24647a2c  addiu       $a0, $v1, 0x7A2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f54) {
            ctx->pc = 0x1E4F84u;
            goto label_1e4f84;
        }
    }
    ctx->pc = 0x1E4F5Cu;
    // 0x1e4f5c: 0xdc82fc24  ld          $v0, -0x3DC($a0)
    ctx->pc = 0x1e4f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294966308)));
    // 0x1e4f60: 0x3403cc00  ori         $v1, $zero, 0xCC00
    ctx->pc = 0x1e4f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1e4f64: 0x31eb8  dsll        $v1, $v1, 26
    ctx->pc = 0x1e4f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 26);
    // 0x1e4f68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1e4f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e4f6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4F6Cu;
    {
        const bool branch_taken_0x1e4f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F6Cu;
        // 0x1e4f70: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f6c) {
            ctx->pc = 0x1E4F84u;
            goto label_1e4f84;
        }
    }
    ctx->pc = 0x1E4F74u;
    // 0x1e4f74: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1e4f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1e4f78: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1e4f7c: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E4F7Cu;
    SET_GPR_U32(ctx, 31, 0x1E4F84u);
    ctx->pc = 0x1E4F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F7Cu;
    // 0x1e4f80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E4F7Cu, 0x1E4F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4F84u;
label_1e4f84:
    // 0x1e4f84: 0x9e220118  lwu         $v0, 0x118($s1)
    ctx->pc = 0x1e4f84u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x1e4f88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4f8c: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
    ctx->pc = 0x1E4F8Cu;
    {
        const bool branch_taken_0x1e4f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f8c) {
            ctx->pc = 0x1E4F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4F8Cu;
            // 0x1e4f90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5258u;
            goto label_1e5258;
        }
    }
    ctx->pc = 0x1E4F94u;
    // 0x1e4f94: 0x9e220200  lwu         $v0, 0x200($s1)
    ctx->pc = 0x1e4f94u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 512)));
    // 0x1e4f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4f9c: 0x504000ae  beql        $v0, $zero, . + 4 + (0xAE << 2)
    ctx->pc = 0x1E4F9Cu;
    {
        const bool branch_taken_0x1e4f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4f9c) {
            ctx->pc = 0x1E4FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E4F9Cu;
            // 0x1e4fa0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5258u;
            goto label_1e5258;
        }
    }
    ctx->pc = 0x1E4FA4u;
    // 0x1e4fa4: 0x9e2202e8  lwu         $v0, 0x2E8($s1)
    ctx->pc = 0x1e4fa4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 744)));
    // 0x1e4fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4fac: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1E4FACu;
    {
        const bool branch_taken_0x1e4fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FACu;
        // 0x1e4fb0: 0x3c060074  lui         $a2, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fac) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E4FB4u;
    // 0x1e4fb4: 0x962203d2  lhu         $v0, 0x3D2($s1)
    ctx->pc = 0x1e4fb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 978)));
    // 0x1e4fb8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E4FB8u;
    {
        const bool branch_taken_0x1e4fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FB8u;
        // 0x1e4fbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fb8) {
            ctx->pc = 0x1E500Cu;
            goto label_1e500c;
        }
    }
    ctx->pc = 0x1E4FC0u;
    // 0x1e4fc0: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x1e4fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x1e4fc4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x1e4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x1e4fc8: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e4fc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e4fcc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e4fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e4fd0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1E4FD0u;
    {
        const bool branch_taken_0x1e4fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FD0u;
        // 0x1e4fd4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fd0) {
            ctx->pc = 0x1E500Cu;
            goto label_1e500c;
        }
    }
    ctx->pc = 0x1E4FD8u;
    // 0x1e4fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e4fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4fdc: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e4fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e4fe0: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1e4fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x1e4fe4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e4fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4fe8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e4fec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e4fecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4ff0: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E4FF0u;
    SET_GPR_U32(ctx, 31, 0x1E4FF8u);
    ctx->pc = 0x1E4FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FF0u;
    // 0x1e4ff4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E4FF0u, 0x1E4FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FF8u;
label_1e4ff8:
    // 0x1e4ff8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e4ffc: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e4ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e5000: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1e5000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x1e5004: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1E5004u;
    {
        const bool branch_taken_0x1e5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5004) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E500Cu;
label_1e500c:
    // 0x1e500c: 0x24c374a0  addiu       $v1, $a2, 0x74A0
    ctx->pc = 0x1e500cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x1e5010: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e5010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5014: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x1e5014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x1e5018: 0xdc6301a0  ld          $v1, 0x1A0($v1)
    ctx->pc = 0x1e5018u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 416)));
    // 0x1e501c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e501cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e5020: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E5020u;
    {
        const bool branch_taken_0x1e5020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5020u;
        // 0x1e5024: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5020) {
            ctx->pc = 0x1E5080u;
            goto label_1e5080;
        }
    }
    ctx->pc = 0x1E5028u;
    // 0x1e5028: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1e5028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e502c: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x1E502Cu;
    {
        const bool branch_taken_0x1e502c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E502Cu;
        // 0x1e5030: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e502c) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E5034u;
    // 0x1e5034: 0x24509b70  addiu       $s0, $v0, -0x6490
    ctx->pc = 0x1e5034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x1e5038: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1E5038u;
    SET_GPR_U32(ctx, 31, 0x1E5040u);
    ctx->pc = 0x1E503Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5038u;
    // 0x1e503c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1E5038u, 0x1E5040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5040u;
label_1e5040:
    // 0x1e5040: 0x8e250368  lw          $a1, 0x368($s1)
    ctx->pc = 0x1e5040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1e5044: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x1e5044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1e5048: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x1E5048u;
    {
        const bool branch_taken_0x1e5048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5048) {
            ctx->pc = 0x1E504Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5048u;
            // 0x1e504c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5258u;
            goto label_1e5258;
        }
    }
    ctx->pc = 0x1E5050u;
    // 0x1e5050: 0x962203d2  lhu         $v0, 0x3D2($s1)
    ctx->pc = 0x1e5050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 978)));
    // 0x1e5054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5058: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e505c: 0xc07ea1c  jal         func_1FA870
    ctx->pc = 0x1E505Cu;
    SET_GPR_U32(ctx, 31, 0x1E5064u);
    ctx->pc = 0x1E5060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E505Cu;
    // 0x1e5060: 0xa62203d2  sh          $v0, 0x3D2($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 978), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA870u, 0x1E505Cu, 0x1E5064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5064u;
label_1e5064:
    // 0x1e5064: 0xc079a92  jal         func_1E6A48
    ctx->pc = 0x1E5064u;
    SET_GPR_U32(ctx, 31, 0x1E506Cu);
    ctx->pc = 0x1E5068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5064u;
    // 0x1e5068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6A48u, 0x1E5064u, 0x1E506Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E506Cu;
label_1e506c:
    // 0x1e506c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e506cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e5070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5074: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e5074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e5078: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5078u;
    {
        const bool branch_taken_0x1e5078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5078u;
        // 0x1e507c: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5078) {
            ctx->pc = 0x1E50C8u;
            goto label_1e50c8;
        }
    }
    ctx->pc = 0x1E5080u;
label_1e5080:
    // 0x1e5080: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1e5084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e5084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e5088: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1E5088u;
    {
        const bool branch_taken_0x1e5088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5088u;
        // 0x1e508c: 0x30a2ffff  andi        $v0, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5088) {
            ctx->pc = 0x1E50E4u;
            goto label_1e50e4;
        }
    }
    ctx->pc = 0x1E5090u;
    // 0x1e5090: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1E5090u;
    {
        const bool branch_taken_0x1e5090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5090u;
        // 0x1e5094: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5090) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E5098u;
    // 0x1e5098: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e5098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e509c: 0x8e250368  lw          $a1, 0x368($s1)
    ctx->pc = 0x1e509cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 872)));
    // 0x1e50a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e50a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50a4: 0xa62203d2  sh          $v0, 0x3D2($s1)
    ctx->pc = 0x1e50a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 978), (uint16_t)GPR_U32(ctx, 2));
    // 0x1e50a8: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1E50A8u;
    SET_GPR_U32(ctx, 31, 0x1E50B0u);
    ctx->pc = 0x1E50ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50A8u;
    // 0x1e50ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1E50A8u, 0x1E50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50B0u;
label_1e50b0:
    // 0x1e50b0: 0xc079a92  jal         func_1E6A48
    ctx->pc = 0x1E50B0u;
    SET_GPR_U32(ctx, 31, 0x1E50B8u);
    ctx->pc = 0x1E50B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50B0u;
    // 0x1e50b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6A48u, 0x1E50B0u, 0x1E50B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50B8u;
label_1e50b8:
    // 0x1e50b8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e50b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e50bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e50bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50c0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e50c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e50c4: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1e50c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_1e50c8:
    // 0x1e50c8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e50cc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e50ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e50d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e50d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50d4: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E50D4u;
    SET_GPR_U32(ctx, 31, 0x1E50DCu);
    ctx->pc = 0x1E50D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50D4u;
    // 0x1e50d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E50D4u, 0x1E50DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50DCu;
label_1e50dc:
    // 0x1e50dc: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1E50DCu;
    {
        const bool branch_taken_0x1e50dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50DCu;
        // 0x1e50e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50dc) {
            ctx->pc = 0x1E5258u;
            goto label_1e5258;
        }
    }
    ctx->pc = 0x1E50E4u;
label_1e50e4:
    // 0x1e50e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E50E4u;
    {
        const bool branch_taken_0x1e50e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50E4u;
        // 0x1e50e8: 0x24c274a0  addiu       $v0, $a2, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50e4) {
            ctx->pc = 0x1E511Cu;
            goto label_1e511c;
        }
    }
    ctx->pc = 0x1E50ECu;
    // 0x1e50ec: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x1e50ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x1e50f0: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x1e50f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x1e50f4: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x1e50f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1e50f8: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x1e50f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x1e50fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e50fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e5100: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E5100u;
    {
        const bool branch_taken_0x1e5100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5100u;
        // 0x1e5104: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5100) {
            ctx->pc = 0x1E5118u;
            goto label_1e5118;
        }
    }
    ctx->pc = 0x1E5108u;
    // 0x1e5108: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1e5108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1e510c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1e510cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1e5110: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1E5110u;
    {
        const bool branch_taken_0x1e5110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5110u;
        // 0x1e5114: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5110) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E5118u;
label_1e5118:
    // 0x1e5118: 0x24c274a0  addiu       $v0, $a2, 0x74A0
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
label_1e511c:
    // 0x1e511c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1e511cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e5120: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x1e5120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x1e5124: 0xdc4301a0  ld          $v1, 0x1A0($v0)
    ctx->pc = 0x1e5124u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
    // 0x1e5128: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e512c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1E512Cu;
    {
        const bool branch_taken_0x1e512c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E512Cu;
        // 0x1e5130: 0x26240400  addiu       $a0, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e512c) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E5134u;
    // 0x1e5134: 0xc079d98  jal         func_1E7660
    ctx->pc = 0x1E5134u;
    SET_GPR_U32(ctx, 31, 0x1E513Cu);
    ctx->pc = 0x1E5138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5134u;
    // 0x1e5138: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7660u, 0x1E5134u, 0x1E513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E513Cu;
label_1e513c:
    // 0x1e513c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1e513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e5140: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1e5140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1e5144: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1e5144u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x1e5148: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1e5148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1e514c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e514cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5150: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1e5150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1e5154: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1e5154u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5158: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1e5158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e515c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e515cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5160: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1E5160u;
    SET_GPR_U32(ctx, 31, 0x1E5168u);
    ctx->pc = 0x1E5164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5160u;
    // 0x1e5164: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1E5160u, 0x1E5168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5168u;
label_1e5168:
    // 0x1e5168: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1e5168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e516c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e5170: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E5170u;
    {
        const bool branch_taken_0x1e5170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5170u;
        // 0x1e5174: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5170) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E5178u;
label_1e5178:
    // 0x1e5178: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e517c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E517Cu;
    {
        const bool branch_taken_0x1e517c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E517Cu;
        // 0x1e5180: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e517c) {
            ctx->pc = 0x1E5190u;
            goto label_1e5190;
        }
    }
    ctx->pc = 0x1E5184u;
    // 0x1e5184: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5184u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5188u;
    {
        const bool branch_taken_0x1e5188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5188u;
        // 0x1e518c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5188) {
            ctx->pc = 0x1E5194u;
            goto label_1e5194;
        }
    }
    ctx->pc = 0x1E5190u;
label_1e5190:
    // 0x1e5190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5194:
    // 0x1e5194: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e5194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e5198: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E5198u;
    {
        const bool branch_taken_0x1e5198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5198u;
        // 0x1e519c: 0x26240400  addiu       $a0, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5198) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E51A0u;
    // 0x1e51a0: 0xc079dec  jal         func_1E77B0
    ctx->pc = 0x1E51A0u;
    SET_GPR_U32(ctx, 31, 0x1E51A8u);
    ctx->pc = 0x1E51A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E51A0u;
    // 0x1e51a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77B0u, 0x1E51A0u, 0x1E51A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E51A8u;
label_1e51a8:
    // 0x1e51a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e51a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e51ac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e51acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e51b0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e51b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e51b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1E51B4u;
    {
        const bool branch_taken_0x1e51b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51B4u;
        // 0x1e51b8: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b4) {
            ctx->pc = 0x1E5250u;
            goto label_1e5250;
        }
    }
    ctx->pc = 0x1E51BCu;
label_1e51bc:
    // 0x1e51bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e51bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e51c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E51C0u;
    {
        const bool branch_taken_0x1e51c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51C0u;
        // 0x1e51c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51c0) {
            ctx->pc = 0x1E51D4u;
            goto label_1e51d4;
        }
    }
    ctx->pc = 0x1E51C8u;
    // 0x1e51c8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e51c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E51CCu;
    {
        const bool branch_taken_0x1e51cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51CCu;
        // 0x1e51d0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51cc) {
            ctx->pc = 0x1E51D8u;
            goto label_1e51d8;
        }
    }
    ctx->pc = 0x1E51D4u;
label_1e51d4:
    // 0x1e51d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e51d8:
    // 0x1e51d8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e51d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e51dc: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1E51DCu;
    {
        const bool branch_taken_0x1e51dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51DCu;
        // 0x1e51e0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51dc) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E51E4u;
    // 0x1e51e4: 0x3404cfc0  ori         $a0, $zero, 0xCFC0
    ctx->pc = 0x1e51e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)53184);
    // 0x1e51e8: 0x426b8  dsll        $a0, $a0, 26
    ctx->pc = 0x1e51e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 26);
    // 0x1e51ec: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1e51ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 30272)));
    // 0x1e51f0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e51f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e51f4: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1E51F4u;
    {
        const bool branch_taken_0x1e51f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E51F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E51F4u;
        // 0x1e51f8: 0x26300400  addiu       $s0, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51f4) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E51FCu;
    // 0x1e51fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e51fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5200: 0xc079dec  jal         func_1E77B0
    ctx->pc = 0x1E5200u;
    SET_GPR_U32(ctx, 31, 0x1E5208u);
    ctx->pc = 0x1E5204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5200u;
    // 0x1e5204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77B0u, 0x1E5200u, 0x1E5208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5208u;
label_1e5208:
    // 0x1e5208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e520c: 0xc079d98  jal         func_1E7660
    ctx->pc = 0x1E520Cu;
    SET_GPR_U32(ctx, 31, 0x1E5214u);
    ctx->pc = 0x1E5210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E520Cu;
    // 0x1e5210: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7660u, 0x1E520Cu, 0x1E5214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5214u;
label_1e5214:
    // 0x1e5214: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5218: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e5218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e521c: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1e521cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1e5220: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E5220u;
    {
        const bool branch_taken_0x1e5220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5220u;
        // 0x1e5224: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5220) {
            ctx->pc = 0x1E5250u;
            goto label_1e5250;
        }
    }
    ctx->pc = 0x1E5228u;
label_1e5228:
    // 0x1e5228: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1e5228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e522c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E522Cu;
    {
        const bool branch_taken_0x1e522c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E522Cu;
        // 0x1e5230: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e522c) {
            ctx->pc = 0x1E5240u;
            goto label_1e5240;
        }
    }
    ctx->pc = 0x1E5234u;
    // 0x1e5234: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e5234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5238: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5238u;
    {
        const bool branch_taken_0x1e5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5238u;
        // 0x1e523c: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5238) {
            ctx->pc = 0x1E5244u;
            goto label_1e5244;
        }
    }
    ctx->pc = 0x1E5240u;
label_1e5240:
    // 0x1e5240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5244:
    // 0x1e5244: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1e5244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e5248: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E5248u;
    {
        const bool branch_taken_0x1e5248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5248u;
        // 0x1e524c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5248) {
            ctx->pc = 0x1E5254u;
            goto label_1e5254;
        }
    }
    ctx->pc = 0x1E5250u;
label_1e5250:
    // 0x1e5250: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1e5250u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1e5254:
    // 0x1e5254: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e5254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5258:
    // 0x1e5258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e525c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e525cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5260: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5260u;
        // 0x1e5264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5268u;
}
