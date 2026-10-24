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

// Function: EventBgm_startByStageCount
// Address: 0x298db8 - 0x298ed0
void EventBgm_startByStageCount_0x298db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventBgm_startByStageCount_0x298db8");
#endif

    switch (ctx->pc) {
        case 0x298dd0u: goto label_298dd0;
        case 0x298e34u: goto label_298e34;
        case 0x298e44u: goto label_298e44;
        case 0x298e64u: goto label_298e64;
        case 0x298e74u: goto label_298e74;
        case 0x298e88u: goto label_298e88;
        case 0x298ea0u: goto label_298ea0;
        case 0x298eb0u: goto label_298eb0;
        case 0x298ec4u: goto label_298ec4;
        default: break;
    }

    ctx->pc = 0x298db8u;

    // 0x298db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298dbc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x298dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x298dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298dc8: 0x24470548  addiu       $a3, $v0, 0x548
    ctx->pc = 0x298dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
    // 0x298dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298dd0:
    // 0x298dd0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x298dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x298dd4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x298dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x298dd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x298dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x298ddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x298ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x298de0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x298de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x298de4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298DE4u;
    {
        const bool branch_taken_0x298de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DE4u;
        // 0x298de8: 0x83300b  movn        $a2, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298de4) {
            ctx->pc = 0x298DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298dd0;
        }
    }
    ctx->pc = 0x298DECu;
    // 0x298dec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x298decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x298df0: 0x10c20018  beq         $a2, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x298DF0u;
    {
        const bool branch_taken_0x298df0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x298DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DF0u;
        // 0x298df4: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298df0) {
            ctx->pc = 0x298E54u;
            goto label_298e54;
        }
    }
    ctx->pc = 0x298DF8u;
    // 0x298df8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298DF8u;
    {
        const bool branch_taken_0x298df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DF8u;
        // 0x298dfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298df8) {
            ctx->pc = 0x298E10u;
            goto label_298e10;
        }
    }
    ctx->pc = 0x298E00u;
    // 0x298e00: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x298E00u;
    {
        const bool branch_taken_0x298e00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x298E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E00u;
        // 0x298e04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e00) {
            ctx->pc = 0x298E24u;
            goto label_298e24;
        }
    }
    ctx->pc = 0x298E08u;
    // 0x298e08: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x298E08u;
    {
        const bool branch_taken_0x298e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e08) {
            ctx->pc = 0x298EC8u;
            goto label_298ec8;
        }
    }
    ctx->pc = 0x298E10u;
label_298e10:
    // 0x298e10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x298e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x298e14: 0x10c2001e  beq         $a2, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x298E14u;
    {
        const bool branch_taken_0x298e14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x298E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E14u;
        // 0x298e18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e14) {
            ctx->pc = 0x298E90u;
            goto label_298e90;
        }
    }
    ctx->pc = 0x298E1Cu;
    // 0x298e1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x298E1Cu;
    {
        const bool branch_taken_0x298e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298e1c) {
            ctx->pc = 0x298EC8u;
            goto label_298ec8;
        }
    }
    ctx->pc = 0x298E24u;
label_298e24:
    // 0x298e24: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x298e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x298e28: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x298e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x298e2c: 0xc0a5f22  jal         func_297C88
    ctx->pc = 0x298E2Cu;
    SET_GPR_U32(ctx, 31, 0x298E34u);
    ctx->pc = 0x298E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E2Cu;
    // 0x298e30: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C88u, 0x298E2Cu, 0x298E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E34u;
label_298e34:
    // 0x298e34: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x298e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x298e38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298e3c: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x298E3Cu;
    SET_GPR_U32(ctx, 31, 0x298E44u);
    ctx->pc = 0x298E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E3Cu;
    // 0x298e40: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x298E3Cu, 0x298E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E44u;
label_298e44:
    // 0x298e44: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x298e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x298e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298E4Cu;
    {
        const bool branch_taken_0x298e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E4Cu;
        // 0x298e50: 0x24c6ac00  addiu       $a2, $a2, -0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e4c) {
            ctx->pc = 0x298E80u;
            goto label_298e80;
        }
    }
    ctx->pc = 0x298E54u;
label_298e54:
    // 0x298e54: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x298e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x298e58: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x298e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
    // 0x298e5c: 0xc0a5f22  jal         func_297C88
    ctx->pc = 0x298E5Cu;
    SET_GPR_U32(ctx, 31, 0x298E64u);
    ctx->pc = 0x298E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E5Cu;
    // 0x298e60: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C88u, 0x298E5Cu, 0x298E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E64u;
label_298e64:
    // 0x298e64: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x298e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x298e68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298e6c: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x298E6Cu;
    SET_GPR_U32(ctx, 31, 0x298E74u);
    ctx->pc = 0x298E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E6Cu;
    // 0x298e70: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x298E6Cu, 0x298E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E74u;
label_298e74:
    // 0x298e74: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x298e74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x298e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298e7c: 0x24c6ac08  addiu       $a2, $a2, -0x53F8
    ctx->pc = 0x298e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945800));
label_298e80:
    // 0x298e80: 0xc0b4088  jal         func_2D0220
    ctx->pc = 0x298E80u;
    SET_GPR_U32(ctx, 31, 0x298E88u);
    ctx->pc = 0x298E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E80u;
    // 0x298e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0220u, 0x298E80u, 0x298E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298E88u;
label_298e88:
    // 0x298e88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x298E88u;
    {
        const bool branch_taken_0x298e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298E88u;
        // 0x298e8c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298e88) {
            ctx->pc = 0x298EC8u;
            goto label_298ec8;
        }
    }
    ctx->pc = 0x298E90u;
label_298e90:
    // 0x298e90: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x298e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x298e94: 0x24051003  addiu       $a1, $zero, 0x1003
    ctx->pc = 0x298e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
    // 0x298e98: 0xc0a5f22  jal         func_297C88
    ctx->pc = 0x298E98u;
    SET_GPR_U32(ctx, 31, 0x298EA0u);
    ctx->pc = 0x298E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298E98u;
    // 0x298e9c: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C88u, 0x298E98u, 0x298EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EA0u;
label_298ea0:
    // 0x298ea0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x298ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x298ea4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298ea8: 0xc0b4b66  jal         func_2D2D98
    ctx->pc = 0x298EA8u;
    SET_GPR_U32(ctx, 31, 0x298EB0u);
    ctx->pc = 0x298EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EA8u;
    // 0x298eac: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2D98u, 0x298EA8u, 0x298EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EB0u;
label_298eb0:
    // 0x298eb0: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x298eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
    // 0x298eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298eb8: 0x24c6ac10  addiu       $a2, $a2, -0x53F0
    ctx->pc = 0x298eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945808));
    // 0x298ebc: 0xc0b4088  jal         func_2D0220
    ctx->pc = 0x298EBCu;
    SET_GPR_U32(ctx, 31, 0x298EC4u);
    ctx->pc = 0x298EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298EBCu;
    // 0x298ec0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0220u, 0x298EBCu, 0x298EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298EC4u;
label_298ec4:
    // 0x298ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298ec8:
    // 0x298ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x298EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EC8u;
        // 0x298ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298ED0u;
}
