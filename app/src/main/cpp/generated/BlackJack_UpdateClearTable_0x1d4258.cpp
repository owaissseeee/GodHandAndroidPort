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

// Function: BlackJack_UpdateClearTable
// Address: 0x1d4258 - 0x1d4480
void BlackJack_UpdateClearTable_0x1d4258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateClearTable_0x1d4258");
#endif

    switch (ctx->pc) {
        case 0x1d429cu: goto label_1d429c;
        case 0x1d42a8u: goto label_1d42a8;
        case 0x1d42b8u: goto label_1d42b8;
        case 0x1d42ecu: goto label_1d42ec;
        case 0x1d4330u: goto label_1d4330;
        case 0x1d4388u: goto label_1d4388;
        case 0x1d43d0u: goto label_1d43d0;
        case 0x1d43dcu: goto label_1d43dc;
        case 0x1d43e8u: goto label_1d43e8;
        case 0x1d4410u: goto label_1d4410;
        case 0x1d441cu: goto label_1d441c;
        case 0x1d4428u: goto label_1d4428;
        case 0x1d4434u: goto label_1d4434;
        default: break;
    }

    ctx->pc = 0x1d4258u;

    // 0x1d4258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d4258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d425c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d4260: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4264: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4268: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d426c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d426cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d4270: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1D4270u;
    {
        const bool branch_taken_0x1d4270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4270u;
        // 0x1d4274: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4270) {
            ctx->pc = 0x1D4470u;
            goto label_1d4470;
        }
    }
    ctx->pc = 0x1D4278u;
    // 0x1d4278: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d4278u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d427c: 0x2442b120  addiu       $v0, $v0, -0x4EE0
    ctx->pc = 0x1d427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947104));
    // 0x1d4280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d4284: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d4284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4288: 0x800008  jr          $a0
    ctx->pc = 0x1D4288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4290u: goto label_1d4290;
            case 0x1D42F8u: goto label_1d42f8;
            case 0x1D43F8u: goto label_1d43f8;
            case 0x1D4444u: goto label_1d4444;
            case 0x1D4468u: goto label_1d4468;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4288u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D4290u;
label_1d4290:
    // 0x1d4290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4294: 0xc075b48  jal         func_1D6D20
    ctx->pc = 0x1D4294u;
    SET_GPR_U32(ctx, 31, 0x1D429Cu);
    ctx->pc = 0x1D4298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4294u;
    // 0x1d4298: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D20u, 0x1D4294u, 0x1D429Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D429Cu;
label_1d429c:
    // 0x1d429c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42a0: 0xc075b5a  jal         func_1D6D68
    ctx->pc = 0x1D42A0u;
    SET_GPR_U32(ctx, 31, 0x1D42A8u);
    ctx->pc = 0x1D42A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42A0u;
    // 0x1d42a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6D68u, 0x1D42A0u, 0x1D42A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42A8u;
label_1d42a8:
    // 0x1d42a8: 0xae001814  sw          $zero, 0x1814($s0)
    ctx->pc = 0x1d42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6164), GPR_U32(ctx, 0));
    // 0x1d42ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d42acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42b0: 0xc0755d8  jal         func_1D5760
    ctx->pc = 0x1D42B0u;
    SET_GPR_U32(ctx, 31, 0x1D42B8u);
    ctx->pc = 0x1D42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42B0u;
    // 0x1d42b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5760u, 0x1D42B0u, 0x1D42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42B8u;
label_1d42b8:
    // 0x1d42b8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d42bc: 0x8e0317d4  lw          $v1, 0x17D4($s0)
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6100)));
    // 0x1d42c0: 0xae02180c  sw          $v0, 0x180C($s0)
    ctx->pc = 0x1d42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
    // 0x1d42c4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d42c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d42c8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d42cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d42d0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d42d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d42d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d42d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d42dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42e0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d42e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d42e4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D42E4u;
    SET_GPR_U32(ctx, 31, 0x1D42ECu);
    ctx->pc = 0x1D42E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42E4u;
    // 0x1d42e8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D42E4u, 0x1D42ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42ECu;
label_1d42ec:
    // 0x1d42ec: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d42f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d42f4: 0xae031808  sw          $v1, 0x1808($s0)
    ctx->pc = 0x1d42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
label_1d42f8:
    // 0x1d42f8: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d42f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d42fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d42fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d4300: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d4300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1d4304: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d4304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4308: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d4308u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d430c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d430cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d4310: 0x0  nop
    ctx->pc = 0x1d4310u;
    // NOP
    // 0x1d4314: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x1d4314u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1d4318: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4318u;
    {
        const bool branch_taken_0x1d4318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4318u;
        // 0x1d431c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4318) {
            ctx->pc = 0x1D4360u;
            goto label_1d4360;
        }
    }
    ctx->pc = 0x1D4320u;
    // 0x1d4320: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x1d4320u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x1d4324: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d4324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d4328: 0x244680f0  addiu       $a2, $v0, -0x7F10
    ctx->pc = 0x1d4328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934768));
    // 0x1d432c: 0x260417d4  addiu       $a0, $s0, 0x17D4
    ctx->pc = 0x1d432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
label_1d4330:
    // 0x1d4330: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4334: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d4338: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1d4338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d433c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d4340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4344: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d4344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d4348: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d434c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d4350: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d4350u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d4354: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d4354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d4358: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D4358u;
    {
        const bool branch_taken_0x1d4358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4358u;
        // 0x1d435c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4358) {
            ctx->pc = 0x1D4330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4330;
        }
    }
    ctx->pc = 0x1D4360u;
label_1d4360:
    // 0x1d4360: 0x960217fe  lhu         $v0, 0x17FE($s0)
    ctx->pc = 0x1d4360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
    // 0x1d4364: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D4364u;
    {
        const bool branch_taken_0x1d4364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4364u;
        // 0x1d4368: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4364) {
            ctx->pc = 0x1D43B8u;
            goto label_1d43b8;
        }
    }
    ctx->pc = 0x1D436Cu;
    // 0x1d436c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d436cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d4370: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d4370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4374: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d4374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1d4378: 0x24468080  addiu       $a2, $v0, -0x7F80
    ctx->pc = 0x1d4378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
    // 0x1d437c: 0x260417e8  addiu       $a0, $s0, 0x17E8
    ctx->pc = 0x1d437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
    // 0x1d4380: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x1d4380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1d4384: 0x0  nop
    ctx->pc = 0x1d4384u;
    // NOP
label_1d4388:
    // 0x1d4388: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d4388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d438c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d438cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d4390: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1d4390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4394: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1d4394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d4398: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d4398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d439c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1d439cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d43a0: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1d43a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1d43a4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1d43a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1d43a8: 0x960217fe  lhu         $v0, 0x17FE($s0)
    ctx->pc = 0x1d43a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
    // 0x1d43ac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d43acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d43b0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D43B0u;
    {
        const bool branch_taken_0x1d43b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D43B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43B0u;
        // 0x1d43b4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43b0) {
            ctx->pc = 0x1D4388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4388;
        }
    }
    ctx->pc = 0x1D43B8u;
label_1d43b8:
    // 0x1d43b8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d43bc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D43BCu;
    {
        const bool branch_taken_0x1d43bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D43C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43BCu;
        // 0x1d43c0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43bc) {
            ctx->pc = 0x1D4460u;
            goto label_1d4460;
        }
    }
    ctx->pc = 0x1D43C4u;
    // 0x1d43c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d43c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43c8: 0xc07580c  jal         func_1D6030
    ctx->pc = 0x1D43C8u;
    SET_GPR_U32(ctx, 31, 0x1D43D0u);
    ctx->pc = 0x1D43CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43C8u;
    // 0x1d43cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6030u, 0x1D43C8u, 0x1D43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43D0u;
label_1d43d0:
    // 0x1d43d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d43d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43d4: 0xc07583e  jal         func_1D60F8
    ctx->pc = 0x1D43D4u;
    SET_GPR_U32(ctx, 31, 0x1D43DCu);
    ctx->pc = 0x1D43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43D4u;
    // 0x1d43d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D60F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D60F8u, 0x1D43D4u, 0x1D43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43DCu;
label_1d43dc:
    // 0x1d43dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d43dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d43e0: 0xc075870  jal         func_1D61C0
    ctx->pc = 0x1D43E0u;
    SET_GPR_U32(ctx, 31, 0x1D43E8u);
    ctx->pc = 0x1D43E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43E0u;
    // 0x1d43e4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D61C0u, 0x1D43E0u, 0x1D43E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43E8u;
label_1d43e8:
    // 0x1d43e8: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d43e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d43ec: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d43ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d43f0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1D43F0u;
    {
        const bool branch_taken_0x1d43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43F0u;
        // 0x1d43f4: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43f0) {
            ctx->pc = 0x1D4454u;
            goto label_1d4454;
        }
    }
    ctx->pc = 0x1D43F8u;
label_1d43f8:
    // 0x1d43f8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d43fc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D43FCu;
    {
        const bool branch_taken_0x1d43fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43FCu;
        // 0x1d4400: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43fc) {
            ctx->pc = 0x1D4460u;
            goto label_1d4460;
        }
    }
    ctx->pc = 0x1D4404u;
    // 0x1d4404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4408: 0xc07570e  jal         func_1D5C38
    ctx->pc = 0x1D4408u;
    SET_GPR_U32(ctx, 31, 0x1D4410u);
    ctx->pc = 0x1D440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4408u;
    // 0x1d440c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C38u, 0x1D4408u, 0x1D4410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4410u;
label_1d4410:
    // 0x1d4410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4414: 0xc075748  jal         func_1D5D20
    ctx->pc = 0x1D4414u;
    SET_GPR_U32(ctx, 31, 0x1D441Cu);
    ctx->pc = 0x1D4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4414u;
    // 0x1d4418: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D20u, 0x1D4414u, 0x1D441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D441Cu;
label_1d441c:
    // 0x1d441c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4420: 0xc075782  jal         func_1D5E08
    ctx->pc = 0x1D4420u;
    SET_GPR_U32(ctx, 31, 0x1D4428u);
    ctx->pc = 0x1D4424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4420u;
    // 0x1d4424: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5E08u, 0x1D4420u, 0x1D4428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4428u;
label_1d4428:
    // 0x1d4428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d442c: 0xc0757d4  jal         func_1D5F50
    ctx->pc = 0x1D442Cu;
    SET_GPR_U32(ctx, 31, 0x1D4434u);
    ctx->pc = 0x1D4430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D442Cu;
    // 0x1d4430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D442Cu, 0x1D4434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4434u;
label_1d4434:
    // 0x1d4434: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d4434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d4438: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d4438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d443c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D443Cu;
    {
        const bool branch_taken_0x1d443c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D443Cu;
        // 0x1d4440: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d443c) {
            ctx->pc = 0x1D4454u;
            goto label_1d4454;
        }
    }
    ctx->pc = 0x1D4444u;
label_1d4444:
    // 0x1d4444: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d4444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d4448: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4448u;
    {
        const bool branch_taken_0x1d4448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4448u;
        // 0x1d444c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4448) {
            ctx->pc = 0x1D4460u;
            goto label_1d4460;
        }
    }
    ctx->pc = 0x1D4450u;
    // 0x1d4450: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d4454:
    // 0x1d4454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d4454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d4458: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4458u;
    {
        const bool branch_taken_0x1d4458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4458u;
        // 0x1d445c: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4458) {
            ctx->pc = 0x1D4470u;
            goto label_1d4470;
        }
    }
    ctx->pc = 0x1D4460u;
label_1d4460:
    // 0x1d4460: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4460u;
    {
        const bool branch_taken_0x1d4460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4460u;
        // 0x1d4464: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4460) {
            ctx->pc = 0x1D4470u;
            goto label_1d4470;
        }
    }
    ctx->pc = 0x1D4468u;
label_1d4468:
    // 0x1d4468: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d4468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d446c: 0xae001804  sw          $zero, 0x1804($s0)
    ctx->pc = 0x1d446cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 0));
label_1d4470:
    // 0x1d4470: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d4470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4478: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4478u;
        // 0x1d447c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4480u;
}
