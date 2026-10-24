#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_00799F00
// Address: 0x799f00 - 0x79a030
void func_00799F00_0x799f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799F00_0x799f00");
#endif

    switch (ctx->pc) {
        case 0x799f58u: goto label_799f58;
        case 0x799f88u: goto label_799f88;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa8u: goto label_799fa8;
        default: break;
    }

    ctx->pc = 0x799f00u;

    // 0x799f00: 0x3c050074  lui         $a1, 0x74
    ctx->pc = 0x799f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x799f04: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x799f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x799f08: 0x8ca37a8c  lw          $v1, 0x7A8C($a1)
    ctx->pc = 0x799f08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A8Cu));
    // 0x799f0c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799f0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799f10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x799f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x799f14: 0x3c04007a  lui         $a0, 0x7A
    ctx->pc = 0x799f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)122 << 16));
    // 0x799f18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x799f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799f20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799f24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x799f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f28: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x799f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x799f2c: 0xaca37a8c  sw          $v1, 0x7A8C($a1)
    ctx->pc = 0x799f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 31372), GPR_U32(ctx, 3));
    // 0x799f30: 0x8086ba50  lb          $a2, -0x45B0($a0)
    ctx->pc = 0x799f30u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294949456)));
    // 0x799f34: 0x2488ba50  addiu       $t0, $a0, -0x45B0
    ctx->pc = 0x799f34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949456));
    // 0x799f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799f3c: 0x24494c58  addiu       $t1, $v0, 0x4C58
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x799f40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f48: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x799F48u;
    {
        const bool branch_taken_0x799f48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F48u;
        // 0x799f4c: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f48) {
            ctx->pc = 0x799F80u;
            goto label_799f80;
        }
    }
    ctx->pc = 0x799F50u;
    // 0x799f50: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x799f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f54: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_799f58:
    // 0x799f58: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x799f5c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x799f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799f60: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799f64: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799f68: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x799f6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x799F6Cu;
    {
        const bool branch_taken_0x799f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F6Cu;
        // 0x799f70: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f6c) {
            ctx->pc = 0x799F80u;
            goto label_799f80;
        }
    }
    ctx->pc = 0x799F74u;
    // 0x799f74: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799f74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799f78: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799F78u;
    {
        const bool branch_taken_0x799f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799f78) {
            ctx->pc = 0x799F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799F78u;
            // 0x799f7c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799f58;
        }
    }
    ctx->pc = 0x799F80u;
label_799f80:
    // 0x799f80: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799F80u;
    SET_GPR_U32(ctx, 31, 0x799F88u);
    ctx->pc = 0x799F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F80u;
    // 0x799f84: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799F80u, 0x799F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F88u;
label_799f88:
    // 0x799f88: 0x8e03bb80  lw          $v1, -0x4480($s0)
    ctx->pc = 0x799f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
    // 0x799f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f94: 0xc1e6b14  jal         func_79AC50
    ctx->pc = 0x799F94u;
    SET_GPR_U32(ctx, 31, 0x799F9Cu);
    ctx->pc = 0x799F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F94u;
    // 0x799f98: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC50u, 0x799F94u, 0x799F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F9Cu;
label_799f9c:
    // 0x799f9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799fa0: 0xc1e6b14  jal         func_79AC50
    ctx->pc = 0x799FA0u;
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->pc = 0x799FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA0u;
    // 0x799fa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AC50u, 0x799FA0u, 0x799FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x8e02bb80  lw          $v0, -0x4480($s0)
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
    // 0x799fac: 0x3c07bfff  lui         $a3, 0xBFFF
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49151 << 16));
    // 0x799fb0: 0x3c0145e1  lui         $at, 0x45E1
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17889 << 16));
    // 0x799fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799fb8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x799fbc: 0x3c014620  lui         $at, 0x4620
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17952 << 16));
    // 0x799fc0: 0x34215000  ori         $at, $at, 0x5000
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20480);
    // 0x799fc4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x799fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x799fc8: 0x3c06dfff  lui         $a2, 0xDFFF
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57343 << 16));
    // 0x799fcc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799fd0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x799fd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x799fd4: 0x3c01465b  lui         $at, 0x465B
    ctx->pc = 0x799fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18011 << 16));
    // 0x799fd8: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x799fd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
    // 0x799fdc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x799fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799fe0: 0x3c05efff  lui         $a1, 0xEFFF
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61439 << 16));
    // 0x799fe4: 0x8e02bb80  lw          $v0, -0x4480($s0)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
    // 0x799fe8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x799fe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x799fec: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x799fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x799ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799ff4: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x799ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x799ff8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x799ffc: 0x8e03bb80  lw          $v1, -0x4480($s0)
    ctx->pc = 0x799ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294949760)));
    // 0x79a000: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a004: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79a004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79a008: 0x8e227a8c  lw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 31372)));
    // 0x79a00c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x79a00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x79a010: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x79a010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x79a014: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79a014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x79a018: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79a01c: 0xae227a8c  sw          $v0, 0x7A8C($s1)
    ctx->pc = 0x79a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 31372), GPR_U32(ctx, 2));
    // 0x79a020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a024: 0x3e00008  jr          $ra
    ctx->pc = 0x79A024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A024u;
        // 0x79a028: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A02Cu;
    // 0x79a02c: 0x0  nop
    ctx->pc = 0x79a02cu;
    // NOP
    ctx->pc = 0x79a030u;
}
} // namespace gh_r601
