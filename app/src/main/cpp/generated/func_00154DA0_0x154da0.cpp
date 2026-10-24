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

// Function: func_00154DA0
// Address: 0x154da0 - 0x154e98
void func_00154DA0_0x154da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00154DA0_0x154da0");
#endif

    switch (ctx->pc) {
        case 0x154e6cu: goto label_154e6c;
        default: break;
    }

    ctx->pc = 0x154da0u;

    // 0x154da0: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x154da0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x154da4: 0x71180  sll         $v0, $a3, 6
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x154da8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x154da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x154dac: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x154dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x154db0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x154db4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x154db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x154db8: 0xac450300  sw          $a1, 0x300($v0)
    ctx->pc = 0x154db8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 768), GPR_U32(ctx, 5));
    // 0x154dbc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x154dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x154dc0: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x154dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x154dc4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x154dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x154dc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x154dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x154dcc: 0x3c081100  lui         $t0, 0x1100
    ctx->pc = 0x154dccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4352 << 16));
    // 0x154dd0: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x154dd0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154dd4: 0x94b7c  dsll32      $t1, $t1, 13
    ctx->pc = 0x154dd4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 13));
    // 0x154dd8: 0x35298001  ori         $t1, $t1, 0x8001
    ctx->pc = 0x154dd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32769);
    // 0x154ddc: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x154ddcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x154de0: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x154de0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x154de4: 0xacac0018  sw          $t4, 0x18($a1)
    ctx->pc = 0x154de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 12));
    // 0x154de8: 0x240e00b0  addiu       $t6, $zero, 0xB0
    ctx->pc = 0x154de8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x154dec: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x154decu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x154df0: 0x3c0a0074  lui         $t2, 0x74
    ctx->pc = 0x154df0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)116 << 16));
    // 0x154df4: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x154df4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x154df8: 0x254a7bb8  addiu       $t2, $t2, 0x7BB8
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 31672));
    // 0x154dfc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x154dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x154e00: 0x240d0006  addiu       $t5, $zero, 0x6
    ctx->pc = 0x154e00u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x154e04: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x154e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x154e08: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x154e08u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e0c: 0x3c090fff  lui         $t1, 0xFFF
    ctx->pc = 0x154e0cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4095 << 16));
    // 0x154e10: 0x3c0c5000  lui         $t4, 0x5000
    ctx->pc = 0x154e10u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20480 << 16));
    // 0x154e14: 0x358c0002  ori         $t4, $t4, 0x2
    ctx->pc = 0x154e14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2);
    // 0x154e18: 0x8c830388  lw          $v1, 0x388($a0)
    ctx->pc = 0x154e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x154e1c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x154e1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x154e20: 0x90880384  lbu         $t0, 0x384($a0)
    ctx->pc = 0x154e20u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 900)));
    // 0x154e24: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x154e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x154e28: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x154e28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x154e2c: 0x8d620020  lw          $v0, 0x20($t3)
    ctx->pc = 0x154e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x154e30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154e34: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x154e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x154e38: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x154e38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x154e3c: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x154e40: 0x10e4018  mult        $t0, $t0, $t6
    ctx->pc = 0x154e40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x154e44: 0x10a4021  addu        $t0, $t0, $t2
    ctx->pc = 0x154e44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x154e48: 0xdd020000  ld          $v0, 0x0($t0)
    ctx->pc = 0x154e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x154e4c: 0xfcad0028  sd          $t5, 0x28($a1)
    ctx->pc = 0x154e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 13));
    // 0x154e50: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x154e50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x154e54: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x154e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x154e58: 0xa94824  and         $t1, $a1, $t1
    ctx->pc = 0x154e58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x154e5c: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x154e5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x154e60: 0x12c4825  or          $t1, $t1, $t4
    ctx->pc = 0x154e60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 12));
    // 0x154e64: 0xc0553a6  jal         func_154E98
    ctx->pc = 0x154E64u;
    SET_GPR_U32(ctx, 31, 0x154E6Cu);
    ctx->pc = 0x154E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154E64u;
    // 0x154e68: 0xfde90000  sd          $t1, 0x0($t7) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E98u, 0x154E64u, 0x154E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E6Cu;
label_154e6c:
    // 0x154e6c: 0x24438000  addiu       $v1, $v0, -0x8000
    ctx->pc = 0x154e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x154e70: 0x70002ca9  por         $a1, $zero, $zero
    ctx->pc = 0x154e70u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x154e74: 0x7c657ff0  sq          $a1, 0x7FF0($v1)
    ctx->pc = 0x154e74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32752), GPR_VEC(ctx, 5));
    // 0x154e78: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x154e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x154e7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x154e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154e80: 0xfc647ff0  sd          $a0, 0x7FF0($v1)
    ctx->pc = 0x154e80u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32752), GPR_U64(ctx, 4));
    // 0x154e84: 0xac607ffc  sw          $zero, 0x7FFC($v1)
    ctx->pc = 0x154e84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32764), GPR_U32(ctx, 0));
    // 0x154e88: 0xac607ff8  sw          $zero, 0x7FF8($v1)
    ctx->pc = 0x154e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32760), GPR_U32(ctx, 0));
    // 0x154e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x154E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E8Cu;
        // 0x154e90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154E94u;
    // 0x154e94: 0x0  nop
    ctx->pc = 0x154e94u;
    // NOP
    ctx->pc = 0x154e98u;
}
