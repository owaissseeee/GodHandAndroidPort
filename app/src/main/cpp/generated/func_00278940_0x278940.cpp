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

// Function: func_00278940
// Address: 0x278940 - 0x278c30
void func_00278940_0x278940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00278940_0x278940");
#endif

    switch (ctx->pc) {
        case 0x2789acu: goto label_2789ac;
        case 0x278b24u: goto label_278b24;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b50u: goto label_278b50;
        case 0x278b58u: goto label_278b58;
        case 0x278b60u: goto label_278b60;
        case 0x278c10u: goto label_278c10;
        case 0x278c1cu: goto label_278c1c;
        default: break;
    }

    ctx->pc = 0x278940u;

    // 0x278940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278944: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x278944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x278948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27894c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27894cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x278950: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278954: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278958: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x278958u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27895c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x27895cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x278960: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x278960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278964: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278964u;
    {
        const bool branch_taken_0x278964 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278964u;
        // 0x278968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278964) {
            ctx->pc = 0x27897Cu;
            goto label_27897c;
        }
    }
    ctx->pc = 0x27896Cu;
    // 0x27896c: 0x50620064  beql        $v1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x27896Cu;
    {
        const bool branch_taken_0x27896c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27896c) {
            ctx->pc = 0x278970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27896Cu;
            // 0x278970: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x278B00u;
            goto label_278b00;
        }
    }
    ctx->pc = 0x278974u;
    // 0x278974: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x278974u;
    {
        const bool branch_taken_0x278974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278974u;
        // 0x278978: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278974) {
            ctx->pc = 0x278C20u;
            goto label_278c20;
        }
    }
    ctx->pc = 0x27897Cu;
label_27897c:
    // 0x27897c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x278980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278984: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x278984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x278988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27898c: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x27898cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x278990: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x278990u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278994: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x278994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x278998: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x278998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27899c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27899cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2789a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2789a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2789a4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2789A4u;
    SET_GPR_U32(ctx, 31, 0x2789ACu);
    ctx->pc = 0x2789A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2789A4u;
    // 0x2789a8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2789A4u, 0x2789ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2789ACu;
label_2789ac:
    // 0x2789ac: 0x920202fc  lbu         $v0, 0x2FC($s0)
    ctx->pc = 0x2789acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x2789b0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2789b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2789b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2789b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2789b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2789b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2789bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2789bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2789c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2789c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2789c4: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x2789c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2789c8: 0xe6140580  swc1        $f20, 0x580($s0)
    ctx->pc = 0x2789c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x2789cc: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2789ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2789d0: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x2789d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x2789d4: 0xe6010588  swc1        $f1, 0x588($s0)
    ctx->pc = 0x2789d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1416), bits); }
    // 0x2789d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2789D8u;
    {
        const bool branch_taken_0x2789d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2789DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789D8u;
        // 0x2789dc: 0xe6010584  swc1        $f1, 0x584($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789d8) {
            ctx->pc = 0x2789FCu;
            goto label_2789fc;
        }
    }
    ctx->pc = 0x2789E0u;
    // 0x2789e0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2789e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2789e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2789e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2789e8: 0x24427cd0  addiu       $v0, $v0, 0x7CD0
    ctx->pc = 0x2789e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31952));
    // 0x2789ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2789ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2789f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2789f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2789f4: 0x800008  jr          $a0
    ctx->pc = 0x2789F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2789FCu: goto label_2789fc;
            case 0x278A0Cu: goto label_278a0c;
            case 0x278A1Cu: goto label_278a1c;
            case 0x278A2Cu: goto label_278a2c;
            case 0x278A3Cu: goto label_278a3c;
            case 0x278A4Cu: goto label_278a4c;
            case 0x278A5Cu: goto label_278a5c;
            case 0x278A6Cu: goto label_278a6c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2789F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2789FCu;
label_2789fc:
    // 0x2789fc: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x2789fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x278a00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a04: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x278A04u;
    {
        const bool branch_taken_0x278a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A04u;
        // 0x278a08: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a04) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A0Cu;
label_278a0c:
    // 0x278a0c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x278a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x278a10: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a14: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x278A14u;
    {
        const bool branch_taken_0x278a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A14u;
        // 0x278a18: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a14) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A1Cu;
label_278a1c:
    // 0x278a1c: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x278a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x278a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a24: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x278A24u;
    {
        const bool branch_taken_0x278a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A24u;
        // 0x278a28: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a24) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A2Cu;
label_278a2c:
    // 0x278a2c: 0x3c014160  lui         $at, 0x4160
    ctx->pc = 0x278a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16736 << 16));
    // 0x278a30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a34: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x278A34u;
    {
        const bool branch_taken_0x278a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A34u;
        // 0x278a38: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a34) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A3Cu;
label_278a3c:
    // 0x278a3c: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x278a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x278a40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a44: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x278A44u;
    {
        const bool branch_taken_0x278a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A44u;
        // 0x278a48: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a44) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A4Cu;
label_278a4c:
    // 0x278a4c: 0x3c014150  lui         $at, 0x4150
    ctx->pc = 0x278a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16720 << 16));
    // 0x278a50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x278A54u;
    {
        const bool branch_taken_0x278a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A54u;
        // 0x278a58: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a54) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A5Cu;
label_278a5c:
    // 0x278a5c: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x278a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x278a60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278A64u;
    {
        const bool branch_taken_0x278a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A64u;
        // 0x278a68: 0xe6000604  swc1        $f0, 0x604($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a64) {
            ctx->pc = 0x278A7Cu;
            goto label_278a7c;
        }
    }
    ctx->pc = 0x278A6Cu;
label_278a6c:
    // 0x278a6c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x278a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x278a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278a74: 0x0  nop
    ctx->pc = 0x278a74u;
    // NOP
    // 0x278a78: 0xe6000604  swc1        $f0, 0x604($s0)
    ctx->pc = 0x278a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1540), bits); }
label_278a7c:
    // 0x278a7c: 0x920402fc  lbu         $a0, 0x2FC($s0)
    ctx->pc = 0x278a7cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 764)));
    // 0x278a80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x278a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x278a84: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x278A84u;
    {
        const bool branch_taken_0x278a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278a84) {
            ctx->pc = 0x278A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A84u;
            // 0x278a88: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A8Cu;
            goto label_278a8c;
        }
    }
    ctx->pc = 0x278A8Cu;
label_278a8c:
    // 0x278a8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x278a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278a90: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x278a90u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x278a94: 0x1810  mfhi        $v1
    ctx->pc = 0x278a94u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x278a98: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x278a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x278a9c: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x278A9Cu;
    {
        const bool branch_taken_0x278a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x278AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A9Cu;
        // 0x278aa0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a9c) {
            ctx->pc = 0x278AC8u;
            goto label_278ac8;
        }
    }
    ctx->pc = 0x278AA4u;
    // 0x278aa4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278AA4u;
    {
        const bool branch_taken_0x278aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AA4u;
        // 0x278aa8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278aa4) {
            ctx->pc = 0x278AB4u;
            goto label_278ab4;
        }
    }
    ctx->pc = 0x278AACu;
    // 0x278aac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278AACu;
    {
        const bool branch_taken_0x278aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278aac) {
            ctx->pc = 0x278ADCu;
            goto label_278adc;
        }
    }
    ctx->pc = 0x278AB4u;
label_278ab4:
    // 0x278ab4: 0x3c013c49  lui         $at, 0x3C49
    ctx->pc = 0x278ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15433 << 16));
    // 0x278ab8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x278ab8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x278abc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278abcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278ac0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x278AC0u;
    {
        const bool branch_taken_0x278ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AC0u;
        // 0x278ac4: 0xe6000608  swc1        $f0, 0x608($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ac0) {
            ctx->pc = 0x278AF0u;
            goto label_278af0;
        }
    }
    ctx->pc = 0x278AC8u;
label_278ac8:
    // 0x278ac8: 0x3c013c83  lui         $at, 0x3C83
    ctx->pc = 0x278ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15491 << 16));
    // 0x278acc: 0x34214e46  ori         $at, $at, 0x4E46
    ctx->pc = 0x278accu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20038);
    // 0x278ad0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278ad4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278AD4u;
    {
        const bool branch_taken_0x278ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AD4u;
        // 0x278ad8: 0xe6000608  swc1        $f0, 0x608($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ad4) {
            ctx->pc = 0x278AF0u;
            goto label_278af0;
        }
    }
    ctx->pc = 0x278ADCu;
label_278adc:
    // 0x278adc: 0x3c013cab  lui         $at, 0x3CAB
    ctx->pc = 0x278adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15531 << 16));
    // 0x278ae0: 0x342192a6  ori         $at, $at, 0x92A6
    ctx->pc = 0x278ae0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37542);
    // 0x278ae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278ae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278ae8: 0x0  nop
    ctx->pc = 0x278ae8u;
    // NOP
    // 0x278aec: 0xe6000608  swc1        $f0, 0x608($s0)
    ctx->pc = 0x278aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1544), bits); }
label_278af0:
    // 0x278af0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x278af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x278af4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278af8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x278af8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x278afc: 0xc6010618  lwc1        $f1, 0x618($s0)
    ctx->pc = 0x278afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278b00:
    // 0x278b00: 0x3c014461  lui         $at, 0x4461
    ctx->pc = 0x278b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17505 << 16));
    // 0x278b04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278b04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278b08: 0x0  nop
    ctx->pc = 0x278b08u;
    // NOP
    // 0x278b0c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x278b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278b10: 0x0  nop
    ctx->pc = 0x278b10u;
    // NOP
    // 0x278b14: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x278B14u;
    {
        const bool branch_taken_0x278b14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278b14) {
            ctx->pc = 0x278B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278B14u;
            // 0x278b18: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x278B40u;
            goto label_278b40;
        }
    }
    ctx->pc = 0x278B1Cu;
    // 0x278b1c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x278B1Cu;
    SET_GPR_U32(ctx, 31, 0x278B24u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x278B1Cu, 0x278B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B24u;
label_278b24:
    // 0x278b24: 0xc6000608  lwc1        $f0, 0x608($s0)
    ctx->pc = 0x278b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b2c: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x278b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278b30: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x278b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x278b34: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x278B34u;
    SET_GPR_U32(ctx, 31, 0x278B3Cu);
    ctx->pc = 0x278B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B34u;
    // 0x278b38: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x278B34u, 0x278B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B3Cu;
label_278b3c:
    // 0x278b3c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x278b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278b40:
    // 0x278b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b44: 0xc60c0600  lwc1        $f12, 0x600($s0)
    ctx->pc = 0x278b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x278b48: 0xc0560a2  jal         func_158288
    ctx->pc = 0x278B48u;
    SET_GPR_U32(ctx, 31, 0x278B50u);
    ctx->pc = 0x278B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B48u;
    // 0x278b4c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x278B48u, 0x278B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B50u;
label_278b50:
    // 0x278b50: 0xc055f06  jal         func_157C18
    ctx->pc = 0x278B50u;
    SET_GPR_U32(ctx, 31, 0x278B58u);
    ctx->pc = 0x278B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278B50u;
    // 0x278b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x278B50u, 0x278B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B58u;
label_278b58:
    // 0x278b58: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x278B58u;
    SET_GPR_U32(ctx, 31, 0x278B60u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x278B58u, 0x278B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278B60u;
label_278b60:
    // 0x278b60: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x278b64: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x278b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x278b68: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x278b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x278b6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x278b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278b70: 0xc6010604  lwc1        $f1, 0x604($s0)
    ctx->pc = 0x278b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278b74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x278b74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x278b78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x278b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x278b7c: 0x0  nop
    ctx->pc = 0x278b7cu;
    // NOP
    // 0x278b80: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x278B80u;
    {
        const bool branch_taken_0x278b80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278b80) {
            ctx->pc = 0x278B90u;
            goto label_278b90;
        }
    }
    ctx->pc = 0x278B88u;
    // 0x278b88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x278B88u;
    {
        const bool branch_taken_0x278b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B88u;
        // 0x278b8c: 0xae000584  sw          $zero, 0x584($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b88) {
            ctx->pc = 0x278BA4u;
            goto label_278ba4;
        }
    }
    ctx->pc = 0x278B90u;
label_278b90:
    // 0x278b90: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x278b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x278b94: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x278b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x278b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x278b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x278b9c: 0x0  nop
    ctx->pc = 0x278b9cu;
    // NOP
    // 0x278ba0: 0xe6000584  swc1        $f0, 0x584($s0)
    ctx->pc = 0x278ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1412), bits); }
label_278ba4:
    // 0x278ba4: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x278ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278ba8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x278ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x278bac: 0xc6010600  lwc1        $f1, 0x600($s0)
    ctx->pc = 0x278bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278bb0: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x278bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x278bb4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278bb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x278bb8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x278bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278bbc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x278bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x278bc0: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x278bc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278bc4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x278bc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x278bc8: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x278bc8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x278bcc: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x278bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x278bd0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x278bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x278bd4: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x278bd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278bd8: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x278bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x278bdc: 0x26020330  addiu       $v0, $s0, 0x330
    ctx->pc = 0x278bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x278be0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x278BE0u;
    {
        const bool branch_taken_0x278be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x278BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BE0u;
        // 0x278be4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278be0) {
            ctx->pc = 0x278BFCu;
            goto label_278bfc;
        }
    }
    ctx->pc = 0x278BE8u;
    // 0x278be8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x278be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278bec: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x278becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x278bf0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x278bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x278bf4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x278bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278bf8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x278bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_278bfc:
    // 0x278bfc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x278c00: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278c00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x278c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c08: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x278C08u;
    SET_GPR_U32(ctx, 31, 0x278C10u);
    ctx->pc = 0x278C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C08u;
    // 0x278c0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x278C08u, 0x278C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C10u;
label_278c10:
    // 0x278c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c14: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x278C14u;
    SET_GPR_U32(ctx, 31, 0x278C1Cu);
    ctx->pc = 0x278C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278C14u;
    // 0x278c18: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x278C14u, 0x278C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278C1Cu;
label_278c1c:
    // 0x278c1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x278c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_278c20:
    // 0x278c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278c24: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x278c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x278c28: 0x3e00008  jr          $ra
    ctx->pc = 0x278C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C28u;
        // 0x278c2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278C30u;
}
