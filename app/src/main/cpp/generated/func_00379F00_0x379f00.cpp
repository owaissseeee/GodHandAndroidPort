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

// Function: func_00379F00
// Address: 0x379f00 - 0x37a020
void func_00379F00_0x379f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00379F00_0x379f00");
#endif

    ctx->pc = 0x379f00u;

    // 0x379f00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x379f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x379f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379f08: 0x80c40007  lb          $a0, 0x7($a2)
    ctx->pc = 0x379f08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
    // 0x379f0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379f10: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x379f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x379f14: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x379f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x379f18: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x379F18u;
    {
        const bool branch_taken_0x379f18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x379F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F18u;
        // 0x379f1c: 0x84450016  lh          $a1, 0x16($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f18) {
            ctx->pc = 0x379F58u;
            goto label_379f58;
        }
    }
    ctx->pc = 0x379F20u;
    // 0x379f20: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x379f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x379f24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x379F24u;
    {
        const bool branch_taken_0x379f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x379f24) {
            ctx->pc = 0x379F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x379F24u;
            // 0x379f28: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x379F3Cu;
            goto label_379f3c;
        }
    }
    ctx->pc = 0x379F2Cu;
    // 0x379f2c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x379F2Cu;
    {
        const bool branch_taken_0x379f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F2Cu;
        // 0x379f30: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f2c) {
            ctx->pc = 0x379F4Cu;
            goto label_379f4c;
        }
    }
    ctx->pc = 0x379F34u;
    // 0x379f34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x379F34u;
    {
        const bool branch_taken_0x379f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F34u;
        // 0x379f38: 0x80c20007  lb          $v0, 0x7($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f34) {
            ctx->pc = 0x379F84u;
            goto label_379f84;
        }
    }
    ctx->pc = 0x379F3Cu;
label_379f3c:
    // 0x379f3c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x379F3Cu;
    {
        const bool branch_taken_0x379f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x379F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F3Cu;
        // 0x379f40: 0x3c020077  lui         $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f3c) {
            ctx->pc = 0x379F70u;
            goto label_379f70;
        }
    }
    ctx->pc = 0x379F44u;
    // 0x379f44: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x379F44u;
    {
        const bool branch_taken_0x379f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F44u;
        // 0x379f48: 0x80c20007  lb          $v0, 0x7($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f44) {
            ctx->pc = 0x379F84u;
            goto label_379f84;
        }
    }
    ctx->pc = 0x379F4Cu;
label_379f4c:
    // 0x379f4c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x379f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x379f50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x379F50u;
    {
        const bool branch_taken_0x379f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F50u;
        // 0x379f54: 0x2442df10  addiu       $v0, $v0, -0x20F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f50) {
            ctx->pc = 0x379F64u;
            goto label_379f64;
        }
    }
    ctx->pc = 0x379F58u;
label_379f58:
    // 0x379f58: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x379f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x379f5c: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x379f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x379f60: 0x2442e510  addiu       $v0, $v0, -0x1AF0
    ctx->pc = 0x379f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960400));
label_379f64:
    // 0x379f64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x379f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x379f68: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x379F68u;
    {
        const bool branch_taken_0x379f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379F68u;
        // 0x379f6c: 0x84690000  lh          $t1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379f68) {
            ctx->pc = 0x379F80u;
            goto label_379f80;
        }
    }
    ctx->pc = 0x379F70u;
label_379f70:
    // 0x379f70: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x379f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x379f74: 0x2442ea50  addiu       $v0, $v0, -0x15B0
    ctx->pc = 0x379f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961744));
    // 0x379f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x379f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x379f7c: 0x84490014  lh          $t1, 0x14($v0)
    ctx->pc = 0x379f7cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_379f80:
    // 0x379f80: 0x80c20007  lb          $v0, 0x7($a2)
    ctx->pc = 0x379f80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_379f84:
    // 0x379f84: 0x24c5001c  addiu       $a1, $a2, 0x1C
    ctx->pc = 0x379f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x379f88: 0x8cc4002c  lw          $a0, 0x2C($a2)
    ctx->pc = 0x379f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x379f8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x379f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x379f90: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x379f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x379f94: 0x8cc80038  lw          $t0, 0x38($a2)
    ctx->pc = 0x379f94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x379f98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x379f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x379f9c: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x379f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x379fa0: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x379fa0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x379fa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x379fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379fa8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x379fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x379fac: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x379facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x379fb0: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x379fb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fb4: 0x1031824  and         $v1, $t0, $v1
    ctx->pc = 0x379fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x379fb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x379FB8u;
    {
        const bool branch_taken_0x379fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x379FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FB8u;
        // 0x379fbc: 0x44380b  movn        $a3, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fb8) {
            ctx->pc = 0x379FCCu;
            goto label_379fcc;
        }
    }
    ctx->pc = 0x379FC0u;
    // 0x379fc0: 0xc71023  subu        $v0, $a2, $a3
    ctx->pc = 0x379fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x379fc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x379fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x379fc8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x379fc8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_379fcc:
    // 0x379fcc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x379fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x379fd0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x379fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x379fd4: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x379fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x379fd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x379FD8u;
    {
        const bool branch_taken_0x379fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FD8u;
        // 0x379fdc: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fd8) {
            ctx->pc = 0x379FE8u;
            goto label_379fe8;
        }
    }
    ctx->pc = 0x379FE0u;
    // 0x379fe0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x379fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x379fe4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x379fe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_379fe8:
    // 0x379fe8: 0x4c10005  bgez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x379FE8u;
    {
        const bool branch_taken_0x379fe8 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x379FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379FE8u;
        // 0x379fec: 0xc9102a  slt         $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x379fe8) {
            ctx->pc = 0x37A000u;
            goto label_37a000;
        }
    }
    ctx->pc = 0x379FF0u;
    // 0x379ff0: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x379ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x379ff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x379ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x379ff8: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x379ff8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x379ffc: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x379ffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_37a000:
    // 0x37a000: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x37a000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x37a004: 0x54ca0003  bnel        $a2, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A004u;
    {
        const bool branch_taken_0x37a004 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        if (branch_taken_0x37a004) {
            ctx->pc = 0x37A008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A004u;
            // 0x37a008: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A014u;
            goto label_37a014;
        }
    }
    ctx->pc = 0x37A00Cu;
    // 0x37a00c: 0x3e00008  jr          $ra
    ctx->pc = 0x37A00Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A00Cu;
        // 0x37a010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A00Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A014u;
label_37a014:
    // 0x37a014: 0x3e00008  jr          $ra
    ctx->pc = 0x37A014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A014u;
        // 0x37a018: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A01Cu;
    // 0x37a01c: 0x0  nop
    ctx->pc = 0x37a01cu;
    // NOP
    ctx->pc = 0x37a020u;
}
