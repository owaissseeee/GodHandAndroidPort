#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlaySeq__C8cEventSePC11cEventSeqSe
// Address: 0x7b1c20 - 0x7b1d38
void movePlaySeq__C8cEventSePC11cEventSeqSe_0x7b1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySeq__C8cEventSePC11cEventSeqSe_0x7b1c20");
#endif

    switch (ctx->pc) {
        case 0x7b1c7cu: goto label_7b1c7c;
        case 0x7b1ca0u: goto label_7b1ca0;
        case 0x7b1cccu: goto label_7b1ccc;
        case 0x7b1cfcu: goto label_7b1cfc;
        case 0x7b1d24u: goto label_7b1d24;
        default: break;
    }

    ctx->pc = 0x7b1c20u;

    // 0x7b1c20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7b1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7b1c24: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x7b1c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b1c28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x7b1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x7b1c2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x7b1c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x7b1c30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7b1c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7b1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7b1c38: 0x3c110004  lui         $s1, 0x4
    ctx->pc = 0x7b1c38u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4 << 16));
    // 0x7b1c3c: 0x9205000b  lbu         $a1, 0xB($s0)
    ctx->pc = 0x7b1c3cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x7b1c40: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x7b1c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b1c44: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x7b1c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x7b1c48: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7B1C48u;
    {
        const bool branch_taken_0x7b1c48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7B1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1C48u;
        // 0x7b1c4c: 0x2880a  movz        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1c48) {
            ctx->pc = 0x7B1C84u;
            goto label_7b1c84;
        }
    }
    ctx->pc = 0x7B1C50u;
    // 0x7b1c50: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x7b1c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7b1c54: 0x1c400022  bgtz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x7B1C54u;
    {
        const bool branch_taken_0x7b1c54 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x7B1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1C54u;
        // 0x7b1c58: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1c54) {
            ctx->pc = 0x7B1CE0u;
            goto label_7b1ce0;
        }
    }
    ctx->pc = 0x7B1C5Cu;
    // 0x7b1c5c: 0x86080012  lh          $t0, 0x12($s0)
    ctx->pc = 0x7b1c5cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x7b1c60: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x7b1c60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7b1c64: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7b1c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7b1c68: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x7b1c68u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7b1c6c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x7b1c6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1c70: 0x86070010  lh          $a3, 0x10($s0)
    ctx->pc = 0x7b1c70u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7b1c74: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7B1C74u;
    SET_GPR_U32(ctx, 31, 0x7B1C7Cu);
    ctx->pc = 0x7B1C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1C74u;
    // 0x7b1c78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7B1C74u, 0x7B1C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1C7Cu;
label_7b1c7c:
    // 0x7b1c7c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x7B1C7Cu;
    {
        const bool branch_taken_0x7b1c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1C7Cu;
        // 0x7b1c80: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1c7c) {
            ctx->pc = 0x7B1D28u;
            goto label_7b1d28;
        }
    }
    ctx->pc = 0x7B1C84u;
label_7b1c84:
    // 0x7b1c84: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x7b1c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x7b1c88: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7B1C88u;
    {
        const bool branch_taken_0x7b1c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1C88u;
        // 0x7b1c8c: 0x3c04007b  lui         $a0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1c88) {
            ctx->pc = 0x7B1CD4u;
            goto label_7b1cd4;
        }
    }
    ctx->pc = 0x7B1C90u;
    // 0x7b1c90: 0x96050008  lhu         $a1, 0x8($s0)
    ctx->pc = 0x7b1c90u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7b1c94: 0x9206000a  lbu         $a2, 0xA($s0)
    ctx->pc = 0x7b1c94u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x7b1c98: 0xc1ec10e  jal         func_7B0438
    ctx->pc = 0x7B1C98u;
    SET_GPR_U32(ctx, 31, 0x7B1CA0u);
    ctx->pc = 0x7B1C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1C98u;
    // 0x7b1c9c: 0x248458d8  addiu       $a0, $a0, 0x58D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B0438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B0438u, 0x7B1C98u, 0x7B1CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1CA0u;
label_7b1ca0:
    // 0x7b1ca0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x7B1CA0u;
    {
        const bool branch_taken_0x7b1ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1CA0u;
        // 0x7b1ca4: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1ca0) {
            ctx->pc = 0x7B1D24u;
            goto label_7b1d24;
        }
    }
    ctx->pc = 0x7B1CA8u;
    // 0x7b1ca8: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x7b1ca8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7b1cac: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x7b1cacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7b1cb0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7b1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7b1cb4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7b1cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1cb8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x7b1cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1cbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7b1cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1cc0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7b1cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1cc4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x7B1CC4u;
    SET_GPR_U32(ctx, 31, 0x7B1CCCu);
    ctx->pc = 0x7B1CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1CC4u;
    // 0x7b1cc8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x7B1CC4u, 0x7B1CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1CCCu;
label_7b1ccc:
    // 0x7b1ccc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x7B1CCCu;
    {
        const bool branch_taken_0x7b1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1CCCu;
        // 0x7b1cd0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1ccc) {
            ctx->pc = 0x7B1D28u;
            goto label_7b1d28;
        }
    }
    ctx->pc = 0x7B1CD4u;
label_7b1cd4:
    // 0x7b1cd4: 0x86020014  lh          $v0, 0x14($s0)
    ctx->pc = 0x7b1cd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7b1cd8: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7B1CD8u;
    {
        const bool branch_taken_0x7b1cd8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1CD8u;
        // 0x7b1cdc: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1cd8) {
            ctx->pc = 0x7B1D04u;
            goto label_7b1d04;
        }
    }
    ctx->pc = 0x7B1CE0u;
label_7b1ce0:
    // 0x7b1ce0: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x7b1ce0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7b1ce4: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x7b1ce4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7b1ce8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7b1ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7b1cec: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7b1cecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1cf0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7b1cf0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1cf4: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x7B1CF4u;
    SET_GPR_U32(ctx, 31, 0x7B1CFCu);
    ctx->pc = 0x7B1CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1CF4u;
    // 0x7b1cf8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x7B1CF4u, 0x7B1CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1CFCu;
label_7b1cfc:
    // 0x7b1cfc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7B1CFCu;
    {
        const bool branch_taken_0x7b1cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1CFCu;
        // 0x7b1d00: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b1cfc) {
            ctx->pc = 0x7B1D28u;
            goto label_7b1d28;
        }
    }
    ctx->pc = 0x7B1D04u;
label_7b1d04:
    // 0x7b1d04: 0x86080012  lh          $t0, 0x12($s0)
    ctx->pc = 0x7b1d04u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x7b1d08: 0x8605000c  lh          $a1, 0xC($s0)
    ctx->pc = 0x7b1d08u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7b1d0c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7b1d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7b1d10: 0x8606000e  lh          $a2, 0xE($s0)
    ctx->pc = 0x7b1d10u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x7b1d14: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x7b1d14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b1d18: 0x86070010  lh          $a3, 0x10($s0)
    ctx->pc = 0x7b1d18u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7b1d1c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x7B1D1Cu;
    SET_GPR_U32(ctx, 31, 0x7B1D24u);
    ctx->pc = 0x7B1D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B1D1Cu;
    // 0x7b1d20: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x7B1D1Cu, 0x7B1D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B1D24u;
label_7b1d24:
    // 0x7b1d24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x7b1d24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_7b1d28:
    // 0x7b1d28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x7b1d28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b1d2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7b1d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b1d30: 0x3e00008  jr          $ra
    ctx->pc = 0x7B1D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B1D30u;
        // 0x7b1d34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B1D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B1D38u;
}
} // namespace gh_event
