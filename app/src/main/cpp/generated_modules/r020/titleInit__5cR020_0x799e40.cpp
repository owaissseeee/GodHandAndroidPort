#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r020_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r020
{
// Function: titleInit__5cR020
// Address: 0x799e40 - 0x79a050
void titleInit__5cR020_0x799e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("titleInit__5cR020_0x799e40");
#endif

    switch (ctx->pc) {
        case 0x799ea0u: goto label_799ea0;
        case 0x799eb8u: goto label_799eb8;
        case 0x799ec4u: goto label_799ec4;
        case 0x799edcu: goto label_799edc;
        case 0x799ef4u: goto label_799ef4;
        case 0x799f0cu: goto label_799f0c;
        case 0x799f24u: goto label_799f24;
        case 0x799f34u: goto label_799f34;
        case 0x799f58u: goto label_799f58;
        case 0x799f78u: goto label_799f78;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fc4u: goto label_799fc4;
        case 0x799ff4u: goto label_799ff4;
        case 0x79a008u: goto label_79a008;
        default: break;
    }

    ctx->pc = 0x799e40u;

    // 0x799e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799e44: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799e48: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x799e4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799e54: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799e58: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x799e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799e60: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x799e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x799e64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799E64u;
    {
        const bool branch_taken_0x799e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E64u;
        // 0x799e68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e64) {
            ctx->pc = 0x799E7Cu;
            goto label_799e7c;
        }
    }
    ctx->pc = 0x799E6Cu;
    // 0x799e6c: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x799E6Cu;
    {
        const bool branch_taken_0x799e6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E6Cu;
        // 0x799e70: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e6c) {
            ctx->pc = 0x799FE4u;
            goto label_799fe4;
        }
    }
    ctx->pc = 0x799E74u;
    // 0x799e74: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x799E74u;
    {
        const bool branch_taken_0x799e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799E74u;
        // 0x799e78: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799e74) {
            ctx->pc = 0x79A034u;
            goto label_79a034;
        }
    }
    ctx->pc = 0x799E7Cu;
label_799e7c:
    // 0x799e7c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x799e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x799e80: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x799e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x799e84: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x799e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x799e88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e8c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x799e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x799e90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799e94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799e98: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x799E98u;
    SET_GPR_U32(ctx, 31, 0x799EA0u);
    ctx->pc = 0x799E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799E98u;
    // 0x799e9c: 0x3c142000  lui         $s4, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x799E98u, 0x799EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EA0u;
label_799ea0:
    // 0x799ea0: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x799ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ea4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x799ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799ea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799eac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799eb0: 0xc0aa94e  jal         func_2AA538
    ctx->pc = 0x799EB0u;
    SET_GPR_U32(ctx, 31, 0x799EB8u);
    ctx->pc = 0x799EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EB0u;
    // 0x799eb4: 0x241000ff  addiu       $s0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA538u, 0x799EB0u, 0x799EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EB8u;
label_799eb8:
    // 0x799eb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ebc: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799EBCu;
    SET_GPR_U32(ctx, 31, 0x799EC4u);
    ctx->pc = 0x799EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EBCu;
    // 0x799ec0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799EBCu, 0x799EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EC4u;
label_799ec4:
    // 0x799ec4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x799ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799ec8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ecc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799ed0: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x799ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x799ed4: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799ED4u;
    SET_GPR_U32(ctx, 31, 0x799EDCu);
    ctx->pc = 0x799ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799ED4u;
    // 0x799ed8: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799ED4u, 0x799EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EDCu;
label_799edc:
    // 0x799edc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x799edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799ee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ee4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x799ee8: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x799ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x799eec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799EECu;
    SET_GPR_U32(ctx, 31, 0x799EF4u);
    ctx->pc = 0x799EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799EECu;
    // 0x799ef0: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799EECu, 0x799EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799EF4u;
label_799ef4:
    // 0x799ef4: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x799ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799ef8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799efc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x799efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x799f00: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x799f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x799f04: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799F04u;
    SET_GPR_U32(ctx, 31, 0x799F0Cu);
    ctx->pc = 0x799F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F04u;
    // 0x799f08: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799F04u, 0x799F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F0Cu;
label_799f0c:
    // 0x799f0c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f14: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799f18: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x799f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x799f1c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799F1Cu;
    SET_GPR_U32(ctx, 31, 0x799F24u);
    ctx->pc = 0x799F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F1Cu;
    // 0x799f20: 0xac43002c  sw          $v1, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799F1Cu, 0x799F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F24u;
label_799f24:
    // 0x799f24: 0xa050004f  sb          $s0, 0x4F($v0)
    ctx->pc = 0x799f24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 16));
    // 0x799f28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f2c: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799F2Cu;
    SET_GPR_U32(ctx, 31, 0x799F34u);
    ctx->pc = 0x799F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F2Cu;
    // 0x799f30: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799F2Cu, 0x799F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F34u;
label_799f34:
    // 0x799f34: 0xa050004f  sb          $s0, 0x4F($v0)
    ctx->pc = 0x799f34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 16));
    // 0x799f38: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x799f3c: 0x8c627a34  lw          $v0, 0x7A34($v1)
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A34u));
    // 0x799f40: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x799f44: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x799F44u;
    {
        const bool branch_taken_0x799f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799f44) {
            ctx->pc = 0x799F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F44u;
            // 0x799f48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F70u;
            goto label_799f70;
        }
    }
    ctx->pc = 0x799F4Cu;
    // 0x799f4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f50: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799F50u;
    SET_GPR_U32(ctx, 31, 0x799F58u);
    ctx->pc = 0x799F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F50u;
    // 0x799f54: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799F50u, 0x799F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F58u;
label_799f58:
    // 0x799f58: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799f5c: 0x3c03dfff  lui         $v1, 0xDFFF
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57343 << 16));
    // 0x799f60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x799f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799f64: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x799f68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x799F68u;
    {
        const bool branch_taken_0x799f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F68u;
        // 0x799f6c: 0xac44002c  sw          $a0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f68) {
            ctx->pc = 0x799F84u;
            goto label_799f84;
        }
    }
    ctx->pc = 0x799F70u;
label_799f70:
    // 0x799f70: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x799F70u;
    SET_GPR_U32(ctx, 31, 0x799F78u);
    ctx->pc = 0x799F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F70u;
    // 0x799f74: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x799F70u, 0x799F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F78u;
label_799f78:
    // 0x799f78: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x799f7c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x799f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x799f80: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x799f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_799f84:
    // 0x799f84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799f88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f8c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f94: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x799fa0: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x799fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x799fa4: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x799fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x799fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fb4: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x799fb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x799fb8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fbc: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799FBCu;
    SET_GPR_U32(ctx, 31, 0x799FC4u);
    ctx->pc = 0x799FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FBCu;
    // 0x799fc0: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799FBCu, 0x799FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FC4u;
label_799fc4:
    // 0x799fc4: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x799fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x799fc8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x799fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799fcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x799fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x799fd0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x799fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x799fd4: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x799fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x799fd8: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x799fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x799fdc: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x799fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x799fe0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x799fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_799fe4:
    // 0x799fe4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799fe8: 0x24507470  addiu       $s0, $v0, 0x7470
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29808));
    // 0x799fec: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x799FECu;
    SET_GPR_U32(ctx, 31, 0x799FF4u);
    ctx->pc = 0x799FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FECu;
    // 0x799ff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x799ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x799ff8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x799FF8u;
    {
        const bool branch_taken_0x799ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799ff8) {
            ctx->pc = 0x799FFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799FF8u;
            // 0x799ffc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A030u;
            goto label_79a030;
        }
    }
    ctx->pc = 0x79A000u;
    // 0x79a000: 0xc0c1dc6  jal         func_307718
    ctx->pc = 0x79A000u;
    SET_GPR_U32(ctx, 31, 0x79A008u);
    ctx->pc = 0x79A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A000u;
    // 0x79a004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307718u, 0x79A000u, 0x79A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A008u;
label_79a008:
    // 0x79a008: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x79a008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x79a00c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A00Cu;
    {
        const bool branch_taken_0x79a00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a00c) {
            ctx->pc = 0x79A02Cu;
            goto label_79a02c;
        }
    }
    ctx->pc = 0x79A014u;
    // 0x79a014: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x79a014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a018: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x79a018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x79a01c: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x79a01cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a020: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x79a020u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x79a024: 0xa2240002  sb          $a0, 0x2($s1)
    ctx->pc = 0x79a024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x79a028: 0xa2200003  sb          $zero, 0x3($s1)
    ctx->pc = 0x79a028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 0));
label_79a02c:
    // 0x79a02c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79a02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_79a030:
    // 0x79a030: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79a030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_79a034:
    // 0x79a034: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79a034u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a038: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79a038u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a03c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79a03cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a044: 0x3e00008  jr          $ra
    ctx->pc = 0x79A044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A044u;
        // 0x79a048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A04Cu;
    // 0x79a04c: 0x0  nop
    ctx->pc = 0x79a04cu;
    // NOP
    ctx->pc = 0x79a050u;
}
} // namespace gh_r020
