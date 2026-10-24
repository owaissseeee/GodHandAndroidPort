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

// Function: func_002D6F40
// Address: 0x2d6f40 - 0x2d73e0
void func_002D6F40_0x2d6f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D6F40_0x2d6f40");
#endif

    switch (ctx->pc) {
        case 0x2d6f9cu: goto label_2d6f9c;
        case 0x2d6fb4u: goto label_2d6fb4;
        case 0x2d6fd0u: goto label_2d6fd0;
        case 0x2d7004u: goto label_2d7004;
        case 0x2d7050u: goto label_2d7050;
        case 0x2d7124u: goto label_2d7124;
        case 0x2d71b0u: goto label_2d71b0;
        case 0x2d71d0u: goto label_2d71d0;
        case 0x2d7200u: goto label_2d7200;
        case 0x2d7258u: goto label_2d7258;
        case 0x2d727cu: goto label_2d727c;
        default: break;
    }

    ctx->pc = 0x2d6f40u;

    // 0x2d6f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2d6f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2d6f44: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d6f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d6f48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2d6f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2d6f4c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d6f50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2d6f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2d6f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2d6f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2d6f5c: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x2d6f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d6f60: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2d6f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2d6f64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d6f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2d6f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2d6f6c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d6f6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6f74: 0x247474a0  addiu       $s4, $v1, 0x74A0
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x2d6f78: 0xae006194  sw          $zero, 0x6194($s0)
    ctx->pc = 0x2d6f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24980), GPR_U32(ctx, 0));
    // 0x2d6f7c: 0xa200619c  sb          $zero, 0x619C($s0)
    ctx->pc = 0x2d6f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24988), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6f80: 0x8e8405ac  lw          $a0, 0x5AC($s4)
    ctx->pc = 0x2d6f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A4Cu));
    // 0x2d6f84: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2D6F84u;
    {
        const bool branch_taken_0x2d6f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F84u;
        // 0x2d6f88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f84) {
            ctx->pc = 0x2D700Cu;
            goto label_2d700c;
        }
    }
    ctx->pc = 0x2D6F8Cu;
    // 0x2d6f8c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d6f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d6f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f94: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2D6F94u;
    SET_GPR_U32(ctx, 31, 0x2D6F9Cu);
    ctx->pc = 0x2D6F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6F94u;
    // 0x2d6f98: 0x24a5d260  addiu       $a1, $a1, -0x2DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2D6F94u, 0x2D6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6F9Cu;
label_2d6f9c:
    // 0x2d6f9c: 0x8e8405ac  lw          $a0, 0x5AC($s4)
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1452)));
    // 0x2d6fa0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2d6fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2d6fa4: 0x24a5d268  addiu       $a1, $a1, -0x2D98
    ctx->pc = 0x2d6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955624));
    // 0x2d6fa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2d6fa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fac: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2D6FACu;
    SET_GPR_U32(ctx, 31, 0x2D6FB4u);
    ctx->pc = 0x2D6FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6FACu;
    // 0x2d6fb0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2D6FACu, 0x2D6FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FB4u;
label_2d6fb4:
    // 0x2d6fb4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d6fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d6fb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d6fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fbc: 0x34636100  ori         $v1, $v1, 0x6100
    ctx->pc = 0x2d6fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24832);
    // 0x2d6fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6fc4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d6fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d6fc8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2d6fcc: 0x0  nop
    ctx->pc = 0x2d6fccu;
    // NOP
label_2d6fd0:
    // 0x2d6fd0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d6fd4: 0x8c825d74  lw          $v0, 0x5D74($a0)
    ctx->pc = 0x2d6fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23924)));
    // 0x2d6fd8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2D6FD8u;
    {
        const bool branch_taken_0x2d6fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6fd8) {
            ctx->pc = 0x2D6FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6FD8u;
            // 0x2d6fdc: 0xac805d74  sw          $zero, 0x5D74($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 23924), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6FE0u;
            goto label_2d6fe0;
        }
    }
    ctx->pc = 0x2D6FE0u;
label_2d6fe0:
    // 0x2d6fe0: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x2d6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x2d6fe4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2d6fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d6fe8: 0x4a1fff9  bgez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2D6FE8u;
    {
        const bool branch_taken_0x2d6fe8 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x2D6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6FE8u;
        // 0x2d6fec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6fe8) {
            ctx->pc = 0x2D6FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6fd0;
        }
    }
    ctx->pc = 0x2D6FF0u;
    // 0x2d6ff0: 0x3c100001  lui         $s0, 0x1
    ctx->pc = 0x2d6ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    // 0x2d6ff4: 0x36105cf0  ori         $s0, $s0, 0x5CF0
    ctx->pc = 0x2d6ff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)23792);
    // 0x2d6ff8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x2d6ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2d6ffc: 0xc0b5a98  jal         func_2D6A60
    ctx->pc = 0x2D6FFCu;
    SET_GPR_U32(ctx, 31, 0x2D7004u);
    ctx->pc = 0x2D7000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6FFCu;
    // 0x2d7000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6A60u, 0x2D6FFCu, 0x2D7004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7004u;
label_2d7004:
    // 0x2d7004: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d7004u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7008: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x2d7008u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_2d700c:
    // 0x2d700c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D700Cu;
    {
        const bool branch_taken_0x2d700c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D700Cu;
        // 0x2d7010: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d700c) {
            ctx->pc = 0x2D701Cu;
            goto label_2d701c;
        }
    }
    ctx->pc = 0x2D7014u;
    // 0x2d7014: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7018: 0xac536120  sw          $s3, 0x6120($v0)
    ctx->pc = 0x2d7018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24864), GPR_U32(ctx, 19));
label_2d701c:
    // 0x2d701c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D701Cu;
    {
        const bool branch_taken_0x2d701c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D701Cu;
        // 0x2d7020: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d701c) {
            ctx->pc = 0x2D702Cu;
            goto label_2d702c;
        }
    }
    ctx->pc = 0x2D7024u;
    // 0x2d7024: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7028: 0xac526130  sw          $s2, 0x6130($v0)
    ctx->pc = 0x2d7028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24880), GPR_U32(ctx, 18));
label_2d702c:
    // 0x2d702c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d7030: 0x241200ff  addiu       $s2, $zero, 0xFF
    ctx->pc = 0x2d7030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d7034: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7038: 0xa0526168  sb          $s2, 0x6168($v0)
    ctx->pc = 0x2d7038u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24936), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d703c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2D703Cu;
    {
        const bool branch_taken_0x2d703c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D703Cu;
        // 0x2d7040: 0xac406284  sw          $zero, 0x6284($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 25220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d703c) {
            ctx->pc = 0x2D7070u;
            goto label_2d7070;
        }
    }
    ctx->pc = 0x2D7044u;
    // 0x2d7044: 0x24446171  addiu       $a0, $v0, 0x6171
    ctx->pc = 0x2d7044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24945));
    // 0x2d7048: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2d7048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d704c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x2d704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2d7050:
    // 0x2d7050: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d7050u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d7054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d7058: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2d7058u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2d705c: 0x0  nop
    ctx->pc = 0x2d705cu;
    // NOP
    // 0x2d7060: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D7060u;
    {
        const bool branch_taken_0x2d7060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7060u;
        // 0x2d7064: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7060) {
            ctx->pc = 0x2D7050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7050;
        }
    }
    ctx->pc = 0x2D7068u;
    // 0x2d7068: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x2D7068u;
    {
        const bool branch_taken_0x2d7068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7068u;
        // 0x2d706c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7068) {
            ctx->pc = 0x2D728Cu;
            goto label_2d728c;
        }
    }
    ctx->pc = 0x2D7070u;
label_2d7070:
    // 0x2d7070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d7070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d7074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7078: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2d7078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2d707c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d707cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d7080: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d7080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d7084: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d7084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d7088: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D7088u;
    {
        const bool branch_taken_0x2d7088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2D708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7088u;
        // 0x2d708c: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7088) {
            ctx->pc = 0x2D70A0u;
            goto label_2d70a0;
        }
    }
    ctx->pc = 0x2D7090u;
    // 0x2d7090: 0xe6210030  swc1        $f1, 0x30($s1)
    ctx->pc = 0x2d7090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2d7094: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d7094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7098: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2d7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d709c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2d70a0:
    // 0x2d70a0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d70a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d70a4: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2d70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2d70a8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d70a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d70ac: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d70acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d70b0: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D70B0u;
    {
        const bool branch_taken_0x2d70b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2D70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70B0u;
        // 0x2d70b4: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70b0) {
            ctx->pc = 0x2D70C8u;
            goto label_2d70c8;
        }
    }
    ctx->pc = 0x2D70B8u;
    // 0x2d70b8: 0xe6210040  swc1        $f1, 0x40($s1)
    ctx->pc = 0x2d70b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x2d70bc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d70bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d70c0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2d70c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d70c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d70c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2d70c8:
    // 0x2d70c8: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2d70c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d70cc: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2d70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2d70d0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d70d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d70d4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2d70d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d70d8: 0x105d0005  beq         $v0, $sp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D70D8u;
    {
        const bool branch_taken_0x2d70d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2D70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D70D8u;
        // 0x2d70dc: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d70d8) {
            ctx->pc = 0x2D70F0u;
            goto label_2d70f0;
        }
    }
    ctx->pc = 0x2D70E0u;
    // 0x2d70e0: 0xe6210050  swc1        $f1, 0x50($s1)
    ctx->pc = 0x2d70e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2d70e4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d70e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d70e8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2d70e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d70ec: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2d70ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2d70f0:
    // 0x2d70f0: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x2d70f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2d70f4: 0x2407005b  addiu       $a3, $zero, 0x5B
    ctx->pc = 0x2d70f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x2d70f8: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x2d70f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2d70fc: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x2d70fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2d7100: 0xa2270002  sb          $a3, 0x2($s1)
    ctx->pc = 0x2d7100u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x2d7104: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d7104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7108: 0xa2300003  sb          $s0, 0x3($s1)
    ctx->pc = 0x2d7108u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d710c: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x2d710cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x2d7110: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x2d7110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7114: 0x2406007b  addiu       $a2, $zero, 0x7B
    ctx->pc = 0x2d7114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x2d7118: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x2d7118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d711c: 0xc0c3970  jal         func_30E5C0
    ctx->pc = 0x2D711Cu;
    SET_GPR_U32(ctx, 31, 0x2D7124u);
    ctx->pc = 0x2D7120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D711Cu;
    // 0x2d7120: 0x2407005b  addiu       $a3, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E5C0u, 0x2D711Cu, 0x2D7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7124u;
label_2d7124:
    // 0x2d7124: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2d7124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2d7128: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d712c: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x2d712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2d7130: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2d7130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2d7134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d7134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d7138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d713c: 0xa232006e  sb          $s2, 0x6E($s1)
    ctx->pc = 0x2d713cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 110), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7140: 0x24067000  addiu       $a2, $zero, 0x7000
    ctx->pc = 0x2d7140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28672));
    // 0x2d7144: 0xa230006f  sb          $s0, 0x6F($s1)
    ctx->pc = 0x2d7144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 111), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d7148: 0xa2320004  sb          $s2, 0x4($s1)
    ctx->pc = 0x2d7148u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d714c: 0xa2320005  sb          $s2, 0x5($s1)
    ctx->pc = 0x2d714cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7150: 0xa2320006  sb          $s2, 0x6($s1)
    ctx->pc = 0x2d7150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7154: 0xa2300007  sb          $s0, 0x7($s1)
    ctx->pc = 0x2d7154u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d7158: 0xa2320008  sb          $s2, 0x8($s1)
    ctx->pc = 0x2d7158u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d715c: 0xa2320009  sb          $s2, 0x9($s1)
    ctx->pc = 0x2d715cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7160: 0xa232000a  sb          $s2, 0xA($s1)
    ctx->pc = 0x2d7160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7164: 0xa230000b  sb          $s0, 0xB($s1)
    ctx->pc = 0x2d7164u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d7168: 0xa232000c  sb          $s2, 0xC($s1)
    ctx->pc = 0x2d7168u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d716c: 0xa232000d  sb          $s2, 0xD($s1)
    ctx->pc = 0x2d716cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7170: 0xa232000e  sb          $s2, 0xE($s1)
    ctx->pc = 0x2d7170u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 14), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7174: 0xa230000f  sb          $s0, 0xF($s1)
    ctx->pc = 0x2d7174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 16));
    // 0x2d7178: 0xa232006c  sb          $s2, 0x6C($s1)
    ctx->pc = 0x2d7178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 108), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d717c: 0xa232006d  sb          $s2, 0x6D($s1)
    ctx->pc = 0x2d717cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 109), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d7180: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x2d7180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
    // 0x2d7184: 0xe6210070  swc1        $f1, 0x70($s1)
    ctx->pc = 0x2d7184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2d7188: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x2d7188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2d718c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x2d718cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x2d7190: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x2d7190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x2d7194: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x2d7194u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
    // 0x2d7198: 0xe6200068  swc1        $f0, 0x68($s1)
    ctx->pc = 0x2d7198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
    // 0x2d719c: 0xe6210018  swc1        $f1, 0x18($s1)
    ctx->pc = 0x2d719cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x2d71a0: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x2d71a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x2d71a4: 0xe6210020  swc1        $f1, 0x20($s1)
    ctx->pc = 0x2d71a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2d71a8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x2D71A8u;
    SET_GPR_U32(ctx, 31, 0x2D71B0u);
    ctx->pc = 0x2D71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D71A8u;
    // 0x2d71ac: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x2D71A8u, 0x2D71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D71B0u;
label_2d71b0:
    // 0x2d71b0: 0x26297080  addiu       $t1, $s1, 0x7080
    ctx->pc = 0x2d71b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 28800));
    // 0x2d71b4: 0x26287084  addiu       $t0, $s1, 0x7084
    ctx->pc = 0x2d71b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 28804));
    // 0x2d71b8: 0x26267088  addiu       $a2, $s1, 0x7088
    ctx->pc = 0x2d71b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 28808));
    // 0x2d71bc: 0x2624708c  addiu       $a0, $s1, 0x708C
    ctx->pc = 0x2d71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28812));
    // 0x2d71c0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2d71c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d71c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2d71c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d71c8: 0x26227010  addiu       $v0, $s1, 0x7010
    ctx->pc = 0x2d71c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 28688));
    // 0x2d71cc: 0x0  nop
    ctx->pc = 0x2d71ccu;
    // NOP
label_2d71d0:
    // 0x2d71d0: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x2d71d0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d71d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2d71d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2d71d8: 0x0  nop
    ctx->pc = 0x2d71d8u;
    // NOP
    // 0x2d71dc: 0x0  nop
    ctx->pc = 0x2d71dcu;
    // NOP
    // 0x2d71e0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D71E0u;
    {
        const bool branch_taken_0x2d71e0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x2D71E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D71E0u;
        // 0x2d71e4: 0x2442ff90  addiu       $v0, $v0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d71e0) {
            ctx->pc = 0x2D71D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d71d0;
        }
    }
    ctx->pc = 0x2D71E8u;
    // 0x2d71e8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2d71e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71ec: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x2d71ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71f0: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2d71f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71f4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x2d71f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d71f8: 0x262803c0  addiu       $t0, $s1, 0x3C0
    ctx->pc = 0x2d71f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 960));
    // 0x2d71fc: 0x0  nop
    ctx->pc = 0x2d71fcu;
    // NOP
label_2d7200:
    // 0x2d7200: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2d7200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2d7204: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2d7204u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x2d7208: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x2d7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x2d720c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2d720cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2d7210: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x2d7210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x2d7214: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2d7214u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2d7218: 0x24c60014  addiu       $a2, $a2, 0x14
    ctx->pc = 0x2d7218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2d721c: 0xa0607090  sb          $zero, 0x7090($v1)
    ctx->pc = 0x2d721cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28816), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7220: 0xa0607091  sb          $zero, 0x7091($v1)
    ctx->pc = 0x2d7220u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28817), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7224: 0xa0607092  sb          $zero, 0x7092($v1)
    ctx->pc = 0x2d7224u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 28818), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7228: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x2d7228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2d722c: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x2d722cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2d7230: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2D7230u;
    {
        const bool branch_taken_0x2d7230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7230u;
        // 0x2d7234: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7230) {
            ctx->pc = 0x2D7200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7200;
        }
    }
    ctx->pc = 0x2D7238u;
    // 0x2d7238: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d723c: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2d723cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
    // 0x2d7240: 0x34426100  ori         $v0, $v0, 0x6100
    ctx->pc = 0x2d7240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24832);
    // 0x2d7244: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2d7244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2d7248: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x2d7248u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d724c: 0x36525c80  ori         $s2, $s2, 0x5C80
    ctx->pc = 0x2d724cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)23680);
    // 0x2d7250: 0x24b0ffff  addiu       $s0, $a1, -0x1
    ctx->pc = 0x2d7250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2d7254: 0x0  nop
    ctx->pc = 0x2d7254u;
    // NOP
label_2d7258:
    // 0x2d7258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d7258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d725c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x2d725cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2d7260: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2d7260u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2d7264: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2d7264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2d7268: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d7268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d726c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2d726cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2d7270: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2d7270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d7274: 0xc0b60a8  jal         func_2D82A0
    ctx->pc = 0x2D7274u;
    SET_GPR_U32(ctx, 31, 0x2D727Cu);
    ctx->pc = 0x2D7278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7274u;
    // 0x2d7278: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D82A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D82A0u, 0x2D7274u, 0x2D727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D727Cu;
label_2d727c:
    // 0x2d727c: 0x320500ff  andi        $a1, $s0, 0xFF
    ctx->pc = 0x2d727cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2d7280: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D7280u;
    {
        const bool branch_taken_0x2d7280 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7280u;
        // 0x2d7284: 0x24b0ffff  addiu       $s0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d7280) {
            ctx->pc = 0x2D7258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d7258;
        }
    }
    ctx->pc = 0x2D7288u;
    // 0x2d7288: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d7288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2d728c:
    // 0x2d728c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2d728cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2d7290: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d7290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7294: 0x344261a0  ori         $v0, $v0, 0x61A0
    ctx->pc = 0x2d7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24992);
    // 0x2d7298: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d7298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d729c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2d729cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2d72a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d72a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d72a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d72a8: 0x346361b0  ori         $v1, $v1, 0x61B0
    ctx->pc = 0x2d72a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25008);
    // 0x2d72ac: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2d72acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2d72b0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2d72b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d72b4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d72b8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d72b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d72bc: 0x348461c0  ori         $a0, $a0, 0x61C0
    ctx->pc = 0x2d72bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)25024);
    // 0x2d72c0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d72c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d72c4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2d72c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2d72c8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2d72c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2d72cc: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x2d72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x2d72d0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2d72d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x2d72d4: 0x34c661d0  ori         $a2, $a2, 0x61D0
    ctx->pc = 0x2d72d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25040);
    // 0x2d72d8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2d72d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2d72dc: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2d72dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2d72e0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2d72e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2d72e4: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x2d72e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x2d72e8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2d72e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2d72ec: 0x34a561e0  ori         $a1, $a1, 0x61E0
    ctx->pc = 0x2d72ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)25056);
    // 0x2d72f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d72f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d72f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d72f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d72f8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2d72fc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2d72fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d7300: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2d7300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2d7304: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d7304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x2d7308: 0x344261f0  ori         $v0, $v0, 0x61F0
    ctx->pc = 0x2d7308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25072);
    // 0x2d730c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2d730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d7310: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7314: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2d7314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d7318: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2d7318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2d731c: 0xe4c2000c  swc1        $f2, 0xC($a2)
    ctx->pc = 0x2d731cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2d7320: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2d7320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2d7324: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x2d7324u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d7328: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2d7328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2d732c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2d732cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2d7330: 0xe4c20008  swc1        $f2, 0x8($a2)
    ctx->pc = 0x2d7330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2d7334: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2d7334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2d7338: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d7338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d733c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d733cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d7340: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2d7340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2d7344: 0xe4a2000c  swc1        $f2, 0xC($a1)
    ctx->pc = 0x2d7344u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x2d7348: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2d7348u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2d734c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2d734cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2d7350: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x2d7350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2d7354: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x2d7354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2d7358: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2d7358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2d735c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2d735cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2d7360: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2d7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7364: 0xe4606150  swc1        $f0, 0x6150($v1)
    ctx->pc = 0x2d7364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24912), bits); }
    // 0x2d7368: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2d7368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d736c: 0xe4616154  swc1        $f1, 0x6154($v1)
    ctx->pc = 0x2d736cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24916), bits); }
    // 0x2d7370: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x2d7370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d7374: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7374u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7378: 0x0  nop
    ctx->pc = 0x2d7378u;
    // NOP
    // 0x2d737c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d737cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7380: 0xe4606158  swc1        $f0, 0x6158($v1)
    ctx->pc = 0x2d7380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24920), bits); }
    // 0x2d7384: 0x92220005  lbu         $v0, 0x5($s1)
    ctx->pc = 0x2d7384u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x2d7388: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d7388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d738c: 0x0  nop
    ctx->pc = 0x2d738cu;
    // NOP
    // 0x2d7390: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d7390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d7394: 0xe460615c  swc1        $f0, 0x615C($v1)
    ctx->pc = 0x2d7394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24924), bits); }
    // 0x2d7398: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x2d7398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x2d739c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d739cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d73a0: 0x0  nop
    ctx->pc = 0x2d73a0u;
    // NOP
    // 0x2d73a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2d73a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2d73a8: 0xe4606160  swc1        $f0, 0x6160($v1)
    ctx->pc = 0x2d73a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24928), bits); }
    // 0x2d73ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2d73acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d73b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2d73b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d73b4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2d73b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d73b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2d73b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d73bc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2d73bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d73c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d73c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d73c4: 0xac646144  sw          $a0, 0x6144($v1)
    ctx->pc = 0x2d73c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24900), GPR_U32(ctx, 4));
    // 0x2d73c8: 0xac606128  sw          $zero, 0x6128($v1)
    ctx->pc = 0x2d73c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24872), GPR_U32(ctx, 0));
    // 0x2d73cc: 0xac64614c  sw          $a0, 0x614C($v1)
    ctx->pc = 0x2d73ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24908), GPR_U32(ctx, 4));
    // 0x2d73d0: 0xac646148  sw          $a0, 0x6148($v1)
    ctx->pc = 0x2d73d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24904), GPR_U32(ctx, 4));
    // 0x2d73d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D73D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D73D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D73D4u;
        // 0x2d73d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D73D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D73DCu;
    // 0x2d73dc: 0x0  nop
    ctx->pc = 0x2d73dcu;
    // NOP
    ctx->pc = 0x2d73e0u;
}
