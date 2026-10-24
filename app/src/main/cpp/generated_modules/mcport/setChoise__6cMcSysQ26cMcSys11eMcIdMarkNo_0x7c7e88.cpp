#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: setChoise__6cMcSysQ26cMcSys11eMcIdMarkNo
// Address: 0x7c7e88 - 0x7c7fb0
void setChoise__6cMcSysQ26cMcSys11eMcIdMarkNo_0x7c7e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setChoise__6cMcSysQ26cMcSys11eMcIdMarkNo_0x7c7e88");
#endif

    switch (ctx->pc) {
        case 0x7c7ed4u: goto label_7c7ed4;
        case 0x7c7ee4u: goto label_7c7ee4;
        case 0x7c7ef4u: goto label_7c7ef4;
        case 0x7c7f0cu: goto label_7c7f0c;
        case 0x7c7f20u: goto label_7c7f20;
        case 0x7c7f34u: goto label_7c7f34;
        case 0x7c7f44u: goto label_7c7f44;
        case 0x7c7f54u: goto label_7c7f54;
        case 0x7c7f64u: goto label_7c7f64;
        case 0x7c7f74u: goto label_7c7f74;
        case 0x7c7f8cu: goto label_7c7f8c;
        case 0x7c7fa0u: goto label_7c7fa0;
        default: break;
    }

    ctx->pc = 0x7c7e88u;

    // 0x7c7e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c7e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c7e8c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x7c7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7c7e90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c7e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c7e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7c7e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7c7e98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c7e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7e9c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x7c7e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x7c7ea0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c7ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c7ea4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x7C7EA4u;
    {
        const bool branch_taken_0x7c7ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7EA4u;
        // 0x7c7ea8: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7ea4) {
            ctx->pc = 0x7C7FA0u;
            goto label_7c7fa0;
        }
    }
    ctx->pc = 0x7C7EACu;
    // 0x7c7eac: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C7EACu;
    {
        const bool branch_taken_0x7c7eac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C7EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7EACu;
        // 0x7c7eb0: 0x24020042  addiu       $v0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7eac) {
            ctx->pc = 0x7C7EC4u;
            goto label_7c7ec4;
        }
    }
    ctx->pc = 0x7C7EB4u;
    // 0x7c7eb4: 0x10a2001c  beq         $a1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7C7EB4u;
    {
        const bool branch_taken_0x7c7eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C7EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7EB4u;
        // 0x7c7eb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7eb4) {
            ctx->pc = 0x7C7F28u;
            goto label_7c7f28;
        }
    }
    ctx->pc = 0x7C7EBCu;
    // 0x7c7ebc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x7C7EBCu;
    {
        const bool branch_taken_0x7c7ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7EBCu;
        // 0x7c7ec0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7ebc) {
            ctx->pc = 0x7C7FA4u;
            goto label_7c7fa4;
        }
    }
    ctx->pc = 0x7C7EC4u;
label_7c7ec4:
    // 0x7c7ec4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7ec8: 0x24050055  addiu       $a1, $zero, 0x55
    ctx->pc = 0x7c7ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x7c7ecc: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C7ECCu;
    SET_GPR_U32(ctx, 31, 0x7C7ED4u);
    ctx->pc = 0x7C7ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7ECCu;
    // 0x7c7ed0: 0x24062003  addiu       $a2, $zero, 0x2003 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C7ECCu, 0x7C7ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7ED4u;
label_7c7ed4:
    // 0x7c7ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7ed8: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x7c7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x7c7edc: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C7EDCu;
    SET_GPR_U32(ctx, 31, 0x7C7EE4u);
    ctx->pc = 0x7C7EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7EDCu;
    // 0x7c7ee0: 0x24062004  addiu       $a2, $zero, 0x2004 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C7EDCu, 0x7C7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7EE4u;
label_7c7ee4:
    // 0x7c7ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7ee8: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c7eec: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7EECu;
    SET_GPR_U32(ctx, 31, 0x7C7EF4u);
    ctx->pc = 0x7C7EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7EECu;
    // 0x7c7ef0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7EECu, 0x7C7EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7EF4u;
label_7c7ef4:
    // 0x7c7ef4: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x7c7ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7c7ef8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7EF8u;
    {
        const bool branch_taken_0x7c7ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7EF8u;
        // 0x7c7efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7ef8) {
            ctx->pc = 0x7C7F14u;
            goto label_7c7f14;
        }
    }
    ctx->pc = 0x7C7F00u;
    // 0x7c7f00: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c7f04: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7F04u;
    SET_GPR_U32(ctx, 31, 0x7C7F0Cu);
    ctx->pc = 0x7C7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F04u;
    // 0x7c7f08: 0x24060051  addiu       $a2, $zero, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7F04u, 0x7C7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F0Cu;
label_7c7f0c:
    // 0x7c7f0c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x7C7F0Cu;
    {
        const bool branch_taken_0x7c7f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7F0Cu;
        // 0x7c7f10: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7f0c) {
            ctx->pc = 0x7C7FA4u;
            goto label_7c7fa4;
        }
    }
    ctx->pc = 0x7C7F14u;
label_7c7f14:
    // 0x7c7f14: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c7f18: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7F18u;
    SET_GPR_U32(ctx, 31, 0x7C7F20u);
    ctx->pc = 0x7C7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F18u;
    // 0x7c7f1c: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7F18u, 0x7C7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F20u;
label_7c7f20:
    // 0x7c7f20: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x7C7F20u;
    {
        const bool branch_taken_0x7c7f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7F20u;
        // 0x7c7f24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7f20) {
            ctx->pc = 0x7C7FA4u;
            goto label_7c7fa4;
        }
    }
    ctx->pc = 0x7C7F28u;
label_7c7f28:
    // 0x7c7f28: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x7c7f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x7c7f2c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C7F2Cu;
    SET_GPR_U32(ctx, 31, 0x7C7F34u);
    ctx->pc = 0x7C7F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F2Cu;
    // 0x7c7f30: 0x24062003  addiu       $a2, $zero, 0x2003 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C7F2Cu, 0x7C7F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F34u;
label_7c7f34:
    // 0x7c7f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7f38: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x7c7f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x7c7f3c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C7F3Cu;
    SET_GPR_U32(ctx, 31, 0x7C7F44u);
    ctx->pc = 0x7C7F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F3Cu;
    // 0x7c7f40: 0x24062004  addiu       $a2, $zero, 0x2004 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C7F3Cu, 0x7C7F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F44u;
label_7c7f44:
    // 0x7c7f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7f48: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x7c7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x7c7f4c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C7F4Cu;
    SET_GPR_U32(ctx, 31, 0x7C7F54u);
    ctx->pc = 0x7C7F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F4Cu;
    // 0x7c7f50: 0x24062003  addiu       $a2, $zero, 0x2003 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C7F4Cu, 0x7C7F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F54u;
label_7c7f54:
    // 0x7c7f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7f58: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x7c7f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x7c7f5c: 0xc1f21f6  jal         func_7C87D8
    ctx->pc = 0x7C7F5Cu;
    SET_GPR_U32(ctx, 31, 0x7C7F64u);
    ctx->pc = 0x7C7F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F5Cu;
    // 0x7c7f60: 0x24062004  addiu       $a2, $zero, 0x2004 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C87D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C87D8u, 0x7C7F5Cu, 0x7C7F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F64u;
label_7c7f64:
    // 0x7c7f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c7f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c7f68: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c7f6c: 0xc1f2254  jal         func_7C8950
    ctx->pc = 0x7C7F6Cu;
    SET_GPR_U32(ctx, 31, 0x7C7F74u);
    ctx->pc = 0x7C7F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F6Cu;
    // 0x7c7f70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8950u, 0x7C7F6Cu, 0x7C7F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F74u;
label_7c7f74:
    // 0x7c7f74: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x7c7f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7c7f78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C7F78u;
    {
        const bool branch_taken_0x7c7f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7F78u;
        // 0x7c7f7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7f78) {
            ctx->pc = 0x7C7F94u;
            goto label_7c7f94;
        }
    }
    ctx->pc = 0x7C7F80u;
    // 0x7c7f80: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c7f84: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7F84u;
    SET_GPR_U32(ctx, 31, 0x7C7F8Cu);
    ctx->pc = 0x7C7F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F84u;
    // 0x7c7f88: 0x24060053  addiu       $a2, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7F84u, 0x7C7F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7F8Cu;
label_7c7f8c:
    // 0x7c7f8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7C7F8Cu;
    {
        const bool branch_taken_0x7c7f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C7F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7F8Cu;
        // 0x7c7f90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c7f8c) {
            ctx->pc = 0x7C7FA4u;
            goto label_7c7fa4;
        }
    }
    ctx->pc = 0x7C7F94u;
label_7c7f94:
    // 0x7c7f94: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x7c7f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x7c7f98: 0xc1f227a  jal         func_7C89E8
    ctx->pc = 0x7C7F98u;
    SET_GPR_U32(ctx, 31, 0x7C7FA0u);
    ctx->pc = 0x7C7F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C7F98u;
    // 0x7c7f9c: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C89E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C89E8u, 0x7C7F98u, 0x7C7FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C7FA0u;
label_7c7fa0:
    // 0x7c7fa0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c7fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c7fa4:
    // 0x7c7fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c7fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c7fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C7FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C7FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C7FA8u;
        // 0x7c7fac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C7FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C7FB0u;
}
} // namespace gh_mcport
