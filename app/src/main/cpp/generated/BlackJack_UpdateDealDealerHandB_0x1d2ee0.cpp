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

// Function: BlackJack_UpdateDealDealerHandB
// Address: 0x1d2ee0 - 0x1d3110
void BlackJack_UpdateDealDealerHandB_0x1d2ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateDealDealerHandB_0x1d2ee0");
#endif

    switch (ctx->pc) {
        case 0x1d2f4cu: goto label_1d2f4c;
        case 0x1d2f84u: goto label_1d2f84;
        case 0x1d2fe0u: goto label_1d2fe0;
        case 0x1d3018u: goto label_1d3018;
        default: break;
    }

    ctx->pc = 0x1d2ee0u;

    // 0x1d2ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d2ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d2ee4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d2ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d2ee8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d2ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d2eec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ef0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d2ef4: 0x8e231808  lw          $v1, 0x1808($s1)
    ctx->pc = 0x1d2ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
    // 0x1d2ef8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1d2ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1d2efc: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1D2EFCu;
    {
        const bool branch_taken_0x1d2efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EFCu;
        // 0x1d2f00: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2efc) {
            ctx->pc = 0x1D30FCu;
            goto label_1d30fc;
        }
    }
    ctx->pc = 0x1D2F04u;
    // 0x1d2f04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2f08: 0x2442b020  addiu       $v0, $v0, -0x4FE0
    ctx->pc = 0x1d2f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946848));
    // 0x1d2f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d2f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d2f10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d2f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2f14: 0x800008  jr          $a0
    ctx->pc = 0x1D2F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D2F1Cu: goto label_1d2f1c;
            case 0x1D2F2Cu: goto label_1d2f2c;
            case 0x1D2F40u: goto label_1d2f40;
            case 0x1D2F54u: goto label_1d2f54;
            case 0x1D2F7Cu: goto label_1d2f7c;
            case 0x1D3040u: goto label_1d3040;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2F14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D2F1Cu;
label_1d2f1c:
    // 0x1d2f1c: 0x8e221808  lw          $v0, 0x1808($s1)
    ctx->pc = 0x1d2f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
    // 0x1d2f20: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d2f24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D2F24u;
    {
        const bool branch_taken_0x1d2f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F24u;
        // 0x1d2f28: 0xae23180c  sw          $v1, 0x180C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f24) {
            ctx->pc = 0x1D2F70u;
            goto label_1d2f70;
        }
    }
    ctx->pc = 0x1D2F2Cu;
label_1d2f2c:
    // 0x1d2f2c: 0x8e22180c  lw          $v0, 0x180C($s1)
    ctx->pc = 0x1d2f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6156)));
    // 0x1d2f30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2F30u;
    {
        const bool branch_taken_0x1d2f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F30u;
        // 0x1d2f34: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f30) {
            ctx->pc = 0x1D2F6Cu;
            goto label_1d2f6c;
        }
    }
    ctx->pc = 0x1D2F38u;
    // 0x1d2f38: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1D2F38u;
    {
        const bool branch_taken_0x1d2f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F38u;
        // 0x1d2f3c: 0xae22180c  sw          $v0, 0x180C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f38) {
            ctx->pc = 0x1D30FCu;
            goto label_1d30fc;
        }
    }
    ctx->pc = 0x1D2F40u;
label_1d2f40:
    // 0x1d2f40: 0x8e2417ec  lw          $a0, 0x17EC($s1)
    ctx->pc = 0x1d2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6124)));
    // 0x1d2f44: 0xc074326  jal         func_1D0C98
    ctx->pc = 0x1D2F44u;
    SET_GPR_U32(ctx, 31, 0x1D2F4Cu);
    ctx->pc = 0x1D2F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2F44u;
    // 0x1d2f48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D2F44u, 0x1D2F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F4Cu;
label_1d2f4c:
    // 0x1d2f4c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2F4Cu;
    {
        const bool branch_taken_0x1d2f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F4Cu;
        // 0x1d2f50: 0x8e221808  lw          $v0, 0x1808($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f4c) {
            ctx->pc = 0x1D2F70u;
            goto label_1d2f70;
        }
    }
    ctx->pc = 0x1D2F54u;
label_1d2f54:
    // 0x1d2f54: 0x8e2317ec  lw          $v1, 0x17EC($s1)
    ctx->pc = 0x1d2f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6124)));
    // 0x1d2f58: 0x9c620004  lwu         $v0, 0x4($v1)
    ctx->pc = 0x1d2f58u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1d2f5c: 0x2107b  dsra        $v0, $v0, 1
    ctx->pc = 0x1d2f5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 1);
    // 0x1d2f60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1d2f64: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x1D2F64u;
    {
        const bool branch_taken_0x1d2f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F64u;
        // 0x1d2f68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f64) {
            ctx->pc = 0x1D3100u;
            goto label_1d3100;
        }
    }
    ctx->pc = 0x1D2F6Cu;
label_1d2f6c:
    // 0x1d2f6c: 0x8e221808  lw          $v0, 0x1808($s1)
    ctx->pc = 0x1d2f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
label_1d2f70:
    // 0x1d2f70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d2f74: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1D2F74u;
    {
        const bool branch_taken_0x1d2f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F74u;
        // 0x1d2f78: 0xae221808  sw          $v0, 0x1808($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f74) {
            ctx->pc = 0x1D30FCu;
            goto label_1d30fc;
        }
    }
    ctx->pc = 0x1D2F7Cu;
label_1d2f7c:
    // 0x1d2f7c: 0xc0751fa  jal         func_1D47E8
    ctx->pc = 0x1D2F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D2F84u);
    ctx->pc = 0x1D2F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2F7Cu;
    // 0x1d2f80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D47E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D47E8u, 0x1D2F7Cu, 0x1D2F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2F84u;
label_1d2f84:
    // 0x1d2f84: 0x28420011  slti        $v0, $v0, 0x11
    ctx->pc = 0x1d2f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2f88: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D2F88u;
    {
        const bool branch_taken_0x1d2f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F88u;
        // 0x1d2f8c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f88) {
            ctx->pc = 0x1D3034u;
            goto label_1d3034;
        }
    }
    ctx->pc = 0x1D2F90u;
    // 0x1d2f90: 0x962217fe  lhu         $v0, 0x17FE($s1)
    ctx->pc = 0x1d2f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d2f94: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x1d2f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d2f98: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D2F98u;
    {
        const bool branch_taken_0x1d2f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2F98u;
        // 0x1d2f9c: 0x263017e8  addiu       $s0, $s1, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 6120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2f98) {
            ctx->pc = 0x1D3030u;
            goto label_1d3030;
        }
    }
    ctx->pc = 0x1D2FA0u;
    // 0x1d2fa0: 0x962217fe  lhu         $v0, 0x17FE($s1)
    ctx->pc = 0x1d2fa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d2fa4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1d2fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1d2fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2fac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d2fb0: 0x3484fffd  ori         $a0, $a0, 0xFFFD
    ctx->pc = 0x1d2fb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65533);
    // 0x1d2fb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d2fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d2fb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d2fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2fbc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d2fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2fc0: 0x8cc20250  lw          $v0, 0x250($a2)
    ctx->pc = 0x1d2fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x1d2fc4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1d2fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1d2fc8: 0xacc20250  sw          $v0, 0x250($a2)
    ctx->pc = 0x1d2fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 592), GPR_U32(ctx, 2));
    // 0x1d2fcc: 0x962317fe  lhu         $v1, 0x17FE($s1)
    ctx->pc = 0x1d2fccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d2fd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d2fd4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1d2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d2fd8: 0xc074326  jal         func_1D0C98
    ctx->pc = 0x1D2FD8u;
    SET_GPR_U32(ctx, 31, 0x1D2FE0u);
    ctx->pc = 0x1D2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2FD8u;
    // 0x1d2fdc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D2FD8u, 0x1D2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2FE0u;
label_1d2fe0:
    // 0x1d2fe0: 0x962217fe  lhu         $v0, 0x17FE($s1)
    ctx->pc = 0x1d2fe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d2fe4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d2fe8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d2fec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d2ff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ff8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d2ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d2ffc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2ffcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d3000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d3004: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d3004u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3008: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d3008u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d300c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d300cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3010: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D3010u;
    SET_GPR_U32(ctx, 31, 0x1D3018u);
    ctx->pc = 0x1D3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3010u;
    // 0x1d3014: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D3010u, 0x1D3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3018u;
label_1d3018:
    // 0x1d3018: 0x8e231808  lw          $v1, 0x1808($s1)
    ctx->pc = 0x1d3018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
    // 0x1d301c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3020: 0xae22180c  sw          $v0, 0x180C($s1)
    ctx->pc = 0x1d3020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6156), GPR_U32(ctx, 2));
    // 0x1d3024: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d3024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3028: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1D3028u;
    {
        const bool branch_taken_0x1d3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3028u;
        // 0x1d302c: 0xae231808  sw          $v1, 0x1808($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3028) {
            ctx->pc = 0x1D30FCu;
            goto label_1d30fc;
        }
    }
    ctx->pc = 0x1D3030u;
label_1d3030:
    // 0x1d3030: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1d3030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d3034:
    // 0x1d3034: 0xae201808  sw          $zero, 0x1808($s1)
    ctx->pc = 0x1d3034u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 0));
    // 0x1d3038: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1D3038u;
    {
        const bool branch_taken_0x1d3038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D303Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3038u;
        // 0x1d303c: 0xae221804  sw          $v0, 0x1804($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3038) {
            ctx->pc = 0x1D30FCu;
            goto label_1d30fc;
        }
    }
    ctx->pc = 0x1D3040u;
label_1d3040:
    // 0x1d3040: 0x962317fe  lhu         $v1, 0x17FE($s1)
    ctx->pc = 0x1d3040u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d3044: 0xc620180c  lwc1        $f0, 0x180C($s1)
    ctx->pc = 0x1d3044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3048: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d3048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d304c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d304cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1d3050: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d3050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d3054: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d3054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d3058: 0x24848080  addiu       $a0, $a0, -0x7F80
    ctx->pc = 0x1d3058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934656));
    // 0x1d305c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d305cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d3060: 0x962517fe  lhu         $a1, 0x17FE($s1)
    ctx->pc = 0x1d3060u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d3064: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d3064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3068: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d3068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d306c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d3070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d3070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d3074: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d3074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1d3078: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d3078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d307c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d307cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3080: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d3080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d3084: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d3084u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1d3088: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d3088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d308c: 0x0  nop
    ctx->pc = 0x1d308cu;
    // NOP
    // 0x1d3090: 0x0  nop
    ctx->pc = 0x1d3090u;
    // NOP
    // 0x1d3094: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d3094u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1d3098: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d3098u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d309c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d30a0: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x1d30a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1d30a4: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d30a4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d30a8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d30a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d30ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d30acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1d30b0: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d30b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d30b4: 0x8ca217e8  lw          $v0, 0x17E8($a1)
    ctx->pc = 0x1d30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6120)));
    // 0x1d30b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d30b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d30bc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d30bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d30c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d30c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d30c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d30c8: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d30cc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d30ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d30d0: 0x8e22180c  lw          $v0, 0x180C($s1)
    ctx->pc = 0x1d30d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6156)));
    // 0x1d30d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D30D4u;
    {
        const bool branch_taken_0x1d30d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30D4u;
        // 0x1d30d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30d4) {
            ctx->pc = 0x1D30F8u;
            goto label_1d30f8;
        }
    }
    ctx->pc = 0x1D30DCu;
    // 0x1d30dc: 0x962217fe  lhu         $v0, 0x17FE($s1)
    ctx->pc = 0x1d30dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6142)));
    // 0x1d30e0: 0x8e231808  lw          $v1, 0x1808($s1)
    ctx->pc = 0x1d30e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6152)));
    // 0x1d30e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d30e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1d30e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1d30ec: 0xa62217fe  sh          $v0, 0x17FE($s1)
    ctx->pc = 0x1d30ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6142), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d30f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D30F0u;
    {
        const bool branch_taken_0x1d30f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D30F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D30F0u;
        // 0x1d30f4: 0xae231808  sw          $v1, 0x1808($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d30f0) {
            ctx->pc = 0x1D30FCu;
            goto label_1d30fc;
        }
    }
    ctx->pc = 0x1D30F8u;
label_1d30f8:
    // 0x1d30f8: 0xae22180c  sw          $v0, 0x180C($s1)
    ctx->pc = 0x1d30f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6156), GPR_U32(ctx, 2));
label_1d30fc:
    // 0x1d30fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d30fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d3100:
    // 0x1d3100: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d3100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d3104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3108: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3108u;
        // 0x1d310c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3110u;
}
