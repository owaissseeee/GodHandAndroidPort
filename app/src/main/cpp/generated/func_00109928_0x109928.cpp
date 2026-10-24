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

// Function: func_00109928
// Address: 0x109928 - 0x10a2c8
void func_00109928_0x109928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00109928_0x109928");
#endif

    switch (ctx->pc) {
        case 0x109964u: goto label_109964;
        case 0x109a10u: goto label_109a10;
        case 0x109a54u: goto label_109a54;
        case 0x109a6cu: goto label_109a6c;
        case 0x109aa8u: goto label_109aa8;
        case 0x109ad8u: goto label_109ad8;
        case 0x109b10u: goto label_109b10;
        case 0x109b60u: goto label_109b60;
        case 0x109b70u: goto label_109b70;
        case 0x109bacu: goto label_109bac;
        case 0x109c24u: goto label_109c24;
        case 0x109c4cu: goto label_109c4c;
        case 0x109c94u: goto label_109c94;
        case 0x109cccu: goto label_109ccc;
        case 0x109cdcu: goto label_109cdc;
        case 0x109d08u: goto label_109d08;
        case 0x109d30u: goto label_109d30;
        case 0x109d40u: goto label_109d40;
        case 0x109d6cu: goto label_109d6c;
        case 0x109d80u: goto label_109d80;
        case 0x109d90u: goto label_109d90;
        case 0x109dd4u: goto label_109dd4;
        case 0x109ed0u: goto label_109ed0;
        case 0x10a1e0u: goto label_10a1e0;
        default: break;
    }

    ctx->pc = 0x109928u;

    // 0x109928: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x109928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x10992c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10992cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x109930: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x109930u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A2Cu));
    // 0x109934: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x109934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x109938: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x109938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x10993c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10993cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x109940: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x109940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x109944: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x109944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109948: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x109948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10994c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10994cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x109950: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x109950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x109954: 0x14400254  bnez        $v0, . + 4 + (0x254 << 2)
    ctx->pc = 0x109954u;
    {
        const bool branch_taken_0x109954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109954u;
        // 0x109958: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109954) {
            ctx->pc = 0x10A2A8u;
            goto label_10a2a8;
        }
    }
    ctx->pc = 0x10995Cu;
    // 0x10995c: 0xc04b2b8  jal         func_12CAE0
    ctx->pc = 0x10995Cu;
    SET_GPR_U32(ctx, 31, 0x109964u);
    ctx->pc = 0x12CAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAE0u, 0x10995Cu, 0x109964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109964u;
label_109964:
    // 0x109964: 0x14400251  bnez        $v0, . + 4 + (0x251 << 2)
    ctx->pc = 0x109964u;
    {
        const bool branch_taken_0x109964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109964u;
        // 0x109968: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109964) {
            ctx->pc = 0x10A2ACu;
            goto label_10a2ac;
        }
    }
    ctx->pc = 0x10996Cu;
    // 0x10996c: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x10996cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x109970: 0x5060024f  beql        $v1, $zero, . + 4 + (0x24F << 2)
    ctx->pc = 0x109970u;
    {
        const bool branch_taken_0x109970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x109970) {
            ctx->pc = 0x109974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109970u;
            // 0x109974: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A2B0u;
            goto label_10a2b0;
        }
    }
    ctx->pc = 0x109978u;
    // 0x109978: 0x9c620060  lwu         $v0, 0x60($v1)
    ctx->pc = 0x109978u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x10997c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x109980: 0x5040024b  beql        $v0, $zero, . + 4 + (0x24B << 2)
    ctx->pc = 0x109980u;
    {
        const bool branch_taken_0x109980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109980) {
            ctx->pc = 0x109984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109980u;
            // 0x109984: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A2B0u;
            goto label_10a2b0;
        }
    }
    ctx->pc = 0x109988u;
    // 0x109988: 0xc621054c  lwc1        $f1, 0x54C($s1)
    ctx->pc = 0x109988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10998c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10998cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109990: 0x0  nop
    ctx->pc = 0x109990u;
    // NOP
    // 0x109994: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x109994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x109998: 0x0  nop
    ctx->pc = 0x109998u;
    // NOP
    // 0x10999c: 0x45030244  bc1tl       . + 4 + (0x244 << 2)
    ctx->pc = 0x10999Cu;
    {
        const bool branch_taken_0x10999c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10999c) {
            ctx->pc = 0x1099A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10999Cu;
            // 0x1099a0: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A2B0u;
            goto label_10a2b0;
        }
    }
    ctx->pc = 0x1099A4u;
    // 0x1099a4: 0x8c720034  lw          $s2, 0x34($v1)
    ctx->pc = 0x1099a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1099a8: 0xa6201616  sh          $zero, 0x1616($s1)
    ctx->pc = 0x1099a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 5654), (uint16_t)GPR_U32(ctx, 0));
    // 0x1099ac: 0x8c70004c  lw          $s0, 0x4C($v1)
    ctx->pc = 0x1099acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1099b0: 0xae20160c  sw          $zero, 0x160C($s1)
    ctx->pc = 0x1099b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5644), GPR_U32(ctx, 0));
    // 0x1099b4: 0x84620046  lh          $v0, 0x46($v1)
    ctx->pc = 0x1099b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x1099b8: 0x2444ffc9  addiu       $a0, $v0, -0x37
    ctx->pc = 0x1099b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
    // 0x1099bc: 0x2c83001f  sltiu       $v1, $a0, 0x1F
    ctx->pc = 0x1099bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1099c0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1099C0u;
    {
        const bool branch_taken_0x1099c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099C0u;
        // 0x1099c4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099c0) {
            ctx->pc = 0x109A04u;
            goto label_109a04;
        }
    }
    ctx->pc = 0x1099C8u;
    // 0x1099c8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1099c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1099cc: 0x2442b950  addiu       $v0, $v0, -0x46B0
    ctx->pc = 0x1099ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949200));
    // 0x1099d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1099d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1099d4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1099d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1099d8: 0x800008  jr          $a0
    ctx->pc = 0x1099D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1099E0u: goto label_1099e0;
            case 0x109A00u: goto label_109a00;
            case 0x109A04u: goto label_109a04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1099D8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1099E0u;
label_1099e0:
    // 0x1099e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1099e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1099e4: 0x26020003  addiu       $v0, $s0, 0x3
    ctx->pc = 0x1099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x1099e8: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x1099e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1099ec: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x1099ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1099f0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1099f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1099f4: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1099f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1099f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1099F8u;
    {
        const bool branch_taken_0x1099f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1099FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1099F8u;
        // 0x1099fc: 0xae22160c  sw          $v0, 0x160C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1099f8) {
            ctx->pc = 0x109A04u;
            goto label_109a04;
        }
    }
    ctx->pc = 0x109A00u;
label_109a00:
    // 0x109a00: 0x24100064  addiu       $s0, $zero, 0x64
    ctx->pc = 0x109a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_109a04:
    // 0x109a04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a08: 0xc04b03e  jal         func_12C0F8
    ctx->pc = 0x109A08u;
    SET_GPR_U32(ctx, 31, 0x109A10u);
    ctx->pc = 0x109A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A08u;
    // 0x109a0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0F8u, 0x109A08u, 0x109A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A10u;
label_109a10:
    // 0x109a10: 0x1a000017  blez        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x109A10u;
    {
        const bool branch_taken_0x109a10 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x109A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A10u;
        // 0x109a14: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a10) {
            ctx->pc = 0x109A70u;
            goto label_109a70;
        }
    }
    ctx->pc = 0x109A18u;
    // 0x109a18: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x109a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x109a1c: 0x2463ffc9  addiu       $v1, $v1, -0x37
    ctx->pc = 0x109a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
    // 0x109a20: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x109a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x109a24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x109A24u;
    {
        const bool branch_taken_0x109a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A24u;
        // 0x109a28: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a24) {
            ctx->pc = 0x109A5Cu;
            goto label_109a5c;
        }
    }
    ctx->pc = 0x109A2Cu;
    // 0x109a2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109a30: 0x2442b9d0  addiu       $v0, $v0, -0x4630
    ctx->pc = 0x109a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949328));
    // 0x109a34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109a38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109a3c: 0x800008  jr          $a0
    ctx->pc = 0x109A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109A44u: goto label_109a44;
            case 0x109A5Cu: goto label_109a5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x109A44u;
label_109a44:
    // 0x109a44: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x109a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x109a48: 0x2405ff60  addiu       $a1, $zero, -0xA0
    ctx->pc = 0x109a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967136));
    // 0x109a4c: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x109A4Cu;
    SET_GPR_U32(ctx, 31, 0x109A54u);
    ctx->pc = 0x109A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A4Cu;
    // 0x109a50: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x109A4Cu, 0x109A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A54u;
label_109a54:
    // 0x109a54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x109A54u;
    {
        const bool branch_taken_0x109a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A54u;
        // 0x109a58: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a54) {
            ctx->pc = 0x109A70u;
            goto label_109a70;
        }
    }
    ctx->pc = 0x109A5Cu;
label_109a5c:
    // 0x109a5c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x109a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x109a60: 0x2405fec0  addiu       $a1, $zero, -0x140
    ctx->pc = 0x109a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966976));
    // 0x109a64: 0xc07e8a0  jal         func_1FA280
    ctx->pc = 0x109A64u;
    SET_GPR_U32(ctx, 31, 0x109A6Cu);
    ctx->pc = 0x109A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A64u;
    // 0x109a68: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA280u, 0x109A64u, 0x109A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A6Cu;
label_109a6c:
    // 0x109a6c: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x109a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_109a70:
    // 0x109a70: 0x8c450040  lw          $a1, 0x40($v0)
    ctx->pc = 0x109a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x109a74: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x109a74u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x109a78: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x109a78u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x109a7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x109A7Cu;
    {
        const bool branch_taken_0x109a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A7Cu;
        // 0x109a80: 0x84460044  lh          $a2, 0x44($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a7c) {
            ctx->pc = 0x109AB0u;
            goto label_109ab0;
        }
    }
    ctx->pc = 0x109A84u;
    // 0x109a84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x109a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x109a88: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a8c: 0x2444ee00  addiu       $a0, $v0, -0x1200
    ctx->pc = 0x109a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x109a90: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x109a90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109a94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a98: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109a98u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a9c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x109a9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109aa0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x109AA0u;
    SET_GPR_U32(ctx, 31, 0x109AA8u);
    ctx->pc = 0x109AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AA0u;
    // 0x109aa4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x109AA0u, 0x109AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AA8u;
label_109aa8:
    // 0x109aa8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x109AA8u;
    {
        const bool branch_taken_0x109aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AA8u;
        // 0x109aac: 0x8e230678  lw          $v1, 0x678($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109aa8) {
            ctx->pc = 0x109AE0u;
            goto label_109ae0;
        }
    }
    ctx->pc = 0x109AB0u;
label_109ab0:
    // 0x109ab0: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x109ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x109ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ab8: 0x2604ee00  addiu       $a0, $s0, -0x1200
    ctx->pc = 0x109ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x109abc: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x109abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x109ac0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x109ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ac8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109ac8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109acc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109accu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ad0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x109AD0u;
    SET_GPR_U32(ctx, 31, 0x109AD8u);
    ctx->pc = 0x109AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109AD0u;
    // 0x109ad4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x109AD0u, 0x109AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109AD8u;
label_109ad8:
    // 0x109ad8: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x109ad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109adc: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x109adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_109ae0:
    // 0x109ae0: 0x84640046  lh          $a0, 0x46($v1)
    ctx->pc = 0x109ae0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x109ae4: 0x2882003c  slti        $v0, $a0, 0x3C
    ctx->pc = 0x109ae4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x109ae8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x109AE8u;
    {
        const bool branch_taken_0x109ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AE8u;
        // 0x109aec: 0x8c700034  lw          $s0, 0x34($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ae8) {
            ctx->pc = 0x109B60u;
            goto label_109b60;
        }
    }
    ctx->pc = 0x109AF0u;
    // 0x109af0: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x109af0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x109af4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x109AF4u;
    {
        const bool branch_taken_0x109af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109af4) {
            ctx->pc = 0x109AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109AF4u;
            // 0x109af8: 0x2690ee00  addiu       $s0, $s4, -0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B64u;
            goto label_109b64;
        }
    }
    ctx->pc = 0x109AFCu;
    // 0x109afc: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x109AFCu;
    {
        const bool branch_taken_0x109afc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x109B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109AFCu;
        // 0x109b00: 0x3c040042  lui         $a0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109afc) {
            ctx->pc = 0x109B60u;
            goto label_109b60;
        }
    }
    ctx->pc = 0x109B04u;
    // 0x109b04: 0x8e0504ac  lw          $a1, 0x4AC($s0)
    ctx->pc = 0x109b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1196)));
    // 0x109b08: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x109B08u;
    SET_GPR_U32(ctx, 31, 0x109B10u);
    ctx->pc = 0x109B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B08u;
    // 0x109b0c: 0x2484b940  addiu       $a0, $a0, -0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x109B08u, 0x109B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B10u;
label_109b10:
    // 0x109b10: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x109B10u;
    {
        const bool branch_taken_0x109b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109b10) {
            ctx->pc = 0x109B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B10u;
            // 0x109b14: 0x2690ee00  addiu       $s0, $s4, -0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B64u;
            goto label_109b64;
        }
    }
    ctx->pc = 0x109B18u;
    // 0x109b18: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x109b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x109b1c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x109B1Cu;
    {
        const bool branch_taken_0x109b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x109b1c) {
            ctx->pc = 0x109B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B1Cu;
            // 0x109b20: 0x2690ee00  addiu       $s0, $s4, -0x1200 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109B64u;
            goto label_109b64;
        }
    }
    ctx->pc = 0x109B24u;
    // 0x109b24: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x109b24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x109b28: 0x24020363  addiu       $v0, $zero, 0x363
    ctx->pc = 0x109b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 867));
    // 0x109b2c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x109B2Cu;
    {
        const bool branch_taken_0x109b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x109B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B2Cu;
        // 0x109b30: 0x240203b7  addiu       $v0, $zero, 0x3B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 951));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b2c) {
            ctx->pc = 0x109B3Cu;
            goto label_109b3c;
        }
    }
    ctx->pc = 0x109B34u;
    // 0x109b34: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109B34u;
    {
        const bool branch_taken_0x109b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x109B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109B34u;
        // 0x109b38: 0x2690ee00  addiu       $s0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109b34) {
            ctx->pc = 0x109B64u;
            goto label_109b64;
        }
    }
    ctx->pc = 0x109B3Cu;
label_109b3c:
    // 0x109b3c: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x109b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x109b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b44: 0x24060137  addiu       $a2, $zero, 0x137
    ctx->pc = 0x109b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 311));
    // 0x109b48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109b48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x109b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109b54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b58: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x109B58u;
    SET_GPR_U32(ctx, 31, 0x109B60u);
    ctx->pc = 0x109B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B58u;
    // 0x109b5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x109B58u, 0x109B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B60u;
label_109b60:
    // 0x109b60: 0x2690ee00  addiu       $s0, $s4, -0x1200
    ctx->pc = 0x109b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
label_109b64:
    // 0x109b64: 0x8e251620  lw          $a1, 0x1620($s1)
    ctx->pc = 0x109b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5664)));
    // 0x109b68: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x109B68u;
    SET_GPR_U32(ctx, 31, 0x109B70u);
    ctx->pc = 0x109B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109B68u;
    // 0x109b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x109B68u, 0x109B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109B70u;
label_109b70:
    // 0x109b70: 0xae201620  sw          $zero, 0x1620($s1)
    ctx->pc = 0x109b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5664), GPR_U32(ctx, 0));
    // 0x109b74: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x109b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x109b78: 0x8e230678  lw          $v1, 0x678($s1)
    ctx->pc = 0x109b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x109b7c: 0x84640046  lh          $a0, 0x46($v1)
    ctx->pc = 0x109b7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
    // 0x109b80: 0x5482000b  bnel        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x109B80u;
    {
        const bool branch_taken_0x109b80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x109b80) {
            ctx->pc = 0x109B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109B80u;
            // 0x109b84: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109BB0u;
            goto label_109bb0;
        }
    }
    ctx->pc = 0x109B88u;
    // 0x109b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b90: 0x2406012b  addiu       $a2, $zero, 0x12B
    ctx->pc = 0x109b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x109b94: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x109b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109b9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109b9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109ba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ba4: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x109BA4u;
    SET_GPR_U32(ctx, 31, 0x109BACu);
    ctx->pc = 0x109BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BA4u;
    // 0x109ba8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x109BA4u, 0x109BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BACu;
label_109bac:
    // 0x109bac: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x109bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_109bb0:
    // 0x109bb0: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x109bb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x109bb4: 0x2463ffc8  addiu       $v1, $v1, -0x38
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967240));
    // 0x109bb8: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x109bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x109bbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109BBCu;
    {
        const bool branch_taken_0x109bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BBCu;
        // 0x109bc0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bbc) {
            ctx->pc = 0x109BDCu;
            goto label_109bdc;
        }
    }
    ctx->pc = 0x109BC4u;
    // 0x109bc4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109bc8: 0x2442ba10  addiu       $v0, $v0, -0x45F0
    ctx->pc = 0x109bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949392));
    // 0x109bcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109bd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109bd4: 0x800008  jr          $a0
    ctx->pc = 0x109BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109BDCu: goto label_109bdc;
            case 0x109C2Cu: goto label_109c2c;
            case 0x109C64u: goto label_109c64;
            case 0x109C74u: goto label_109c74;
            case 0x109CACu: goto label_109cac;
            case 0x109D10u: goto label_109d10;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109BD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x109BDCu;
label_109bdc:
    // 0x109bdc: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x109bdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x109be0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x109be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109be4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x109be8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109BE8u;
    {
        const bool branch_taken_0x109be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BE8u;
        // 0x109bec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109be8) {
            ctx->pc = 0x109BFCu;
            goto label_109bfc;
        }
    }
    ctx->pc = 0x109BF0u;
    // 0x109bf0: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x109bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x109bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109BF4u;
    {
        const bool branch_taken_0x109bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BF4u;
        // 0x109bf8: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bf4) {
            ctx->pc = 0x109C00u;
            goto label_109c00;
        }
    }
    ctx->pc = 0x109BFCu;
label_109bfc:
    // 0x109bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x109bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_109c00:
    // 0x109c00: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x109C00u;
    {
        const bool branch_taken_0x109c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C00u;
        // 0x109c04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c00) {
            ctx->pc = 0x109D6Cu;
            goto label_109d6c;
        }
    }
    ctx->pc = 0x109C08u;
    // 0x109c08: 0x8c4700f0  lw          $a3, 0xF0($v0)
    ctx->pc = 0x109c08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x109c0c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x109c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x109c10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x109c10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x109c14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x109c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109c18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109c18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c1c: 0xc0c1a0e  jal         func_306838
    ctx->pc = 0x109C1Cu;
    SET_GPR_U32(ctx, 31, 0x109C24u);
    ctx->pc = 0x109C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C1Cu;
    // 0x109c20: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x109C1Cu, 0x109C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C24u;
label_109c24:
    // 0x109c24: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x109C24u;
    {
        const bool branch_taken_0x109c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109c24) {
            ctx->pc = 0x109D6Cu;
            goto label_109d6c;
        }
    }
    ctx->pc = 0x109C2Cu;
label_109c2c:
    // 0x109c2c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x109c30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x109c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c34: 0x2405004b  addiu       $a1, $zero, 0x4B
    ctx->pc = 0x109c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x109c38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x109c38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c40: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x109c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109c44: 0xc0c194a  jal         func_306528
    ctx->pc = 0x109C44u;
    SET_GPR_U32(ctx, 31, 0x109C4Cu);
    ctx->pc = 0x109C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C44u;
    // 0x109c48: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x109C44u, 0x109C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C4Cu;
label_109c4c:
    // 0x109c4c: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x109c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x109c50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c54: 0x2406012b  addiu       $a2, $zero, 0x12B
    ctx->pc = 0x109c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
    // 0x109c58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c5c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x109C5Cu;
    {
        const bool branch_taken_0x109c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C5Cu;
        // 0x109c60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c5c) {
            ctx->pc = 0x109CF8u;
            goto label_109cf8;
        }
    }
    ctx->pc = 0x109C64u;
label_109c64:
    // 0x109c64: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x109c64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x109c68: 0x24040058  addiu       $a0, $zero, 0x58
    ctx->pc = 0x109c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x109c6c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x109C6Cu;
    {
        const bool branch_taken_0x109c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C6Cu;
        // 0x109c70: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c6c) {
            ctx->pc = 0x109CB8u;
            goto label_109cb8;
        }
    }
    ctx->pc = 0x109C74u;
label_109c74:
    // 0x109c74: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x109c74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x109c78: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x109c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x109c7c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x109c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x109c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c88: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x109c88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109c8c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x109C8Cu;
    SET_GPR_U32(ctx, 31, 0x109C94u);
    ctx->pc = 0x109C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109C8Cu;
    // 0x109c90: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x109C8Cu, 0x109C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C94u;
label_109c94:
    // 0x109c94: 0x12400035  beqz        $s2, . + 4 + (0x35 << 2)
    ctx->pc = 0x109C94u;
    {
        const bool branch_taken_0x109c94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109C94u;
        // 0x109c98: 0x2684ee00  addiu       $a0, $s4, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c94) {
            ctx->pc = 0x109D6Cu;
            goto label_109d6c;
        }
    }
    ctx->pc = 0x109C9Cu;
    // 0x109c9c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x109c9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ca0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109ca4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x109CA4u;
    {
        const bool branch_taken_0x109ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CA4u;
        // 0x109ca8: 0x24060036  addiu       $a2, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ca4) {
            ctx->pc = 0x109CF4u;
            goto label_109cf4;
        }
    }
    ctx->pc = 0x109CACu;
label_109cac:
    // 0x109cac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x109cacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x109cb0: 0x24040063  addiu       $a0, $zero, 0x63
    ctx->pc = 0x109cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x109cb4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x109cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_109cb8:
    // 0x109cb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cc0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x109cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109cc4: 0xc0c194a  jal         func_306528
    ctx->pc = 0x109CC4u;
    SET_GPR_U32(ctx, 31, 0x109CCCu);
    ctx->pc = 0x109CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CC4u;
    // 0x109cc8: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x109CC4u, 0x109CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CCCu;
label_109ccc:
    // 0x109ccc: 0x12400027  beqz        $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x109CCCu;
    {
        const bool branch_taken_0x109ccc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109CCCu;
        // 0x109cd0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ccc) {
            ctx->pc = 0x109D6Cu;
            goto label_109d6c;
        }
    }
    ctx->pc = 0x109CD4u;
    // 0x109cd4: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x109CD4u;
    SET_GPR_U32(ctx, 31, 0x109CDCu);
    ctx->pc = 0x109CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109CD4u;
    // 0x109cd8: 0x2690ee00  addiu       $s0, $s4, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x109CD4u, 0x109CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109CDCu;
label_109cdc:
    // 0x109cdc: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x109cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x109ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109ce4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x109ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x109ce8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x109ce8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cec: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x109cecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x109cf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109cf4:
    // 0x109cf4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109cf8:
    // 0x109cf8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109cf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cfc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109cfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d00: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x109D00u;
    SET_GPR_U32(ctx, 31, 0x109D08u);
    ctx->pc = 0x109D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D00u;
    // 0x109d04: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x109D00u, 0x109D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D08u;
label_109d08:
    // 0x109d08: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x109D08u;
    {
        const bool branch_taken_0x109d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109d08) {
            ctx->pc = 0x109D6Cu;
            goto label_109d6c;
        }
    }
    ctx->pc = 0x109D10u;
label_109d10:
    // 0x109d10: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x109d10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x109d14: 0x240400bd  addiu       $a0, $zero, 0xBD
    ctx->pc = 0x109d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x109d18: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x109d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109d1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x109d1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x109d20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d24: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x109d28: 0xc0c194a  jal         func_306528
    ctx->pc = 0x109D28u;
    SET_GPR_U32(ctx, 31, 0x109D30u);
    ctx->pc = 0x109D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D28u;
    // 0x109d2c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x109D28u, 0x109D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D30u;
label_109d30:
    // 0x109d30: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x109D30u;
    {
        const bool branch_taken_0x109d30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D30u;
        // 0x109d34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d30) {
            ctx->pc = 0x109D6Cu;
            goto label_109d6c;
        }
    }
    ctx->pc = 0x109D38u;
    // 0x109d38: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x109D38u;
    SET_GPR_U32(ctx, 31, 0x109D40u);
    ctx->pc = 0x109D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D38u;
    // 0x109d3c: 0x2690ee00  addiu       $s0, $s4, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x109D38u, 0x109D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D40u;
label_109d40:
    // 0x109d40: 0x24420025  addiu       $v0, $v0, 0x25
    ctx->pc = 0x109d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 37));
    // 0x109d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x109d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x109d4c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x109d4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d50: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x109d50u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x109d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x109d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109d58: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x109d58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x109d5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x109d60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d64: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x109D64u;
    SET_GPR_U32(ctx, 31, 0x109D6Cu);
    ctx->pc = 0x109D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D64u;
    // 0x109d68: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x109D64u, 0x109D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D6Cu;
label_109d6c:
    // 0x109d6c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x109d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x109d70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x109d70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x109d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d78: 0xc0499dc  jal         func_126770
    ctx->pc = 0x109D78u;
    SET_GPR_U32(ctx, 31, 0x109D80u);
    ctx->pc = 0x109D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D78u;
    // 0x109d7c: 0xe620054c  swc1        $f0, 0x54C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x126770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126770u, 0x109D78u, 0x109D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D80u;
label_109d80:
    // 0x109d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x109d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x109d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d88: 0xc0493d8  jal         func_124F60
    ctx->pc = 0x109D88u;
    SET_GPR_U32(ctx, 31, 0x109D90u);
    ctx->pc = 0x109D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D88u;
    // 0x109d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x109D88u, 0x109D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D90u;
label_109d90:
    // 0x109d90: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x109d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x109d94: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x109d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x109d98: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x109d9c: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x109D9Cu;
    {
        const bool branch_taken_0x109d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x109DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D9Cu;
        // 0x109da0: 0x28820053  slti        $v0, $a0, 0x53 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)83) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d9c) {
            ctx->pc = 0x109DC8u;
            goto label_109dc8;
        }
    }
    ctx->pc = 0x109DA4u;
    // 0x109da4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109DA4u;
    {
        const bool branch_taken_0x109da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DA4u;
        // 0x109da8: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109da4) {
            ctx->pc = 0x109DBCu;
            goto label_109dbc;
        }
    }
    ctx->pc = 0x109DACu;
    // 0x109dac: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109DACu;
    {
        const bool branch_taken_0x109dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x109DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DACu;
        // 0x109db0: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dac) {
            ctx->pc = 0x109DCCu;
            goto label_109dcc;
        }
    }
    ctx->pc = 0x109DB4u;
    // 0x109db4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x109DB4u;
    {
        const bool branch_taken_0x109db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DB4u;
        // 0x109db8: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109db4) {
            ctx->pc = 0x109DD8u;
            goto label_109dd8;
        }
    }
    ctx->pc = 0x109DBCu;
label_109dbc:
    // 0x109dbc: 0x24020055  addiu       $v0, $zero, 0x55
    ctx->pc = 0x109dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x109dc0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109DC0u;
    {
        const bool branch_taken_0x109dc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x109dc0) {
            ctx->pc = 0x109DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109DC0u;
            // 0x109dc4: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109DD8u;
            goto label_109dd8;
        }
    }
    ctx->pc = 0x109DC8u;
label_109dc8:
    // 0x109dc8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x109dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_109dcc:
    // 0x109dcc: 0xc0a4c34  jal         func_2930D0
    ctx->pc = 0x109DCCu;
    SET_GPR_U32(ctx, 31, 0x109DD4u);
    ctx->pc = 0x109DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DCCu;
    // 0x109dd0: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930D0u, 0x109DCCu, 0x109DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DD4u;
label_109dd4:
    // 0x109dd4: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x109dd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_109dd8:
    // 0x109dd8: 0x5c40004f  bgtzl       $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x109DD8u;
    {
        const bool branch_taken_0x109dd8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x109dd8) {
            ctx->pc = 0x109DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109DD8u;
            // 0x109ddc: 0x8e2215f4  lw          $v0, 0x15F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F18u;
            goto label_109f18;
        }
    }
    ctx->pc = 0x109DE0u;
    // 0x109de0: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x109de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x109de4: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x109de4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x109de8: 0x2463ffc9  addiu       $v1, $v1, -0x37
    ctx->pc = 0x109de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
    // 0x109dec: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x109decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x109df0: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x109DF0u;
    {
        const bool branch_taken_0x109df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DF0u;
        // 0x109df4: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109df0) {
            ctx->pc = 0x109F04u;
            goto label_109f04;
        }
    }
    ctx->pc = 0x109DF8u;
    // 0x109df8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109dfc: 0x2442ba70  addiu       $v0, $v0, -0x4590
    ctx->pc = 0x109dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949488));
    // 0x109e00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109e04: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109e08: 0x800008  jr          $a0
    ctx->pc = 0x109E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109E10u: goto label_109e10;
            case 0x109E28u: goto label_109e28;
            case 0x109E40u: goto label_109e40;
            case 0x109E58u: goto label_109e58;
            case 0x109E74u: goto label_109e74;
            case 0x109E90u: goto label_109e90;
            case 0x109EACu: goto label_109eac;
            case 0x109EC8u: goto label_109ec8;
            case 0x109F04u: goto label_109f04;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109E08u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x109E10u;
label_109e10:
    // 0x109e10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e18: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109e18u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109e1c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x109e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x109e20: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x109E20u;
    {
        const bool branch_taken_0x109e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E20u;
        // 0x109e24: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e20) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109E28u;
label_109e28:
    // 0x109e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e30: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x109e30u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x109e34: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109e34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109e38: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x109E38u;
    {
        const bool branch_taken_0x109e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E38u;
        // 0x109e3c: 0xa22302f5  sb          $v1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e38) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109E40u;
label_109e40:
    // 0x109e40: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x109e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e48: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x109e48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x109e4c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x109e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x109e50: 0x10000114  b           . + 4 + (0x114 << 2)
    ctx->pc = 0x109E50u;
    {
        const bool branch_taken_0x109e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E50u;
        // 0x109e54: 0xa22302f4  sb          $v1, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e50) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109E58u;
label_109e58:
    // 0x109e58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x109e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109e64: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109e68: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x109e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x109e6c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x109E6Cu;
    {
        const bool branch_taken_0x109e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E6Cu;
        // 0x109e70: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e6c) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109E74u;
label_109e74:
    // 0x109e74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e7c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x109e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x109e80: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109e80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109e84: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x109e84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x109e88: 0x10000106  b           . + 4 + (0x106 << 2)
    ctx->pc = 0x109E88u;
    {
        const bool branch_taken_0x109e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109E88u;
        // 0x109e8c: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109e88) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109E90u;
label_109e90:
    // 0x109e90: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109e94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109e98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x109e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x109e9c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109ea0: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x109ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x109ea4: 0x100000ff  b           . + 4 + (0xFF << 2)
    ctx->pc = 0x109EA4u;
    {
        const bool branch_taken_0x109ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EA4u;
        // 0x109ea8: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ea4) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109EACu;
label_109eac:
    // 0x109eac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x109eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109eb4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x109eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x109eb8: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109ebc: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x109ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x109ec0: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x109EC0u;
    {
        const bool branch_taken_0x109ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EC0u;
        // 0x109ec4: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ec0) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109EC8u;
label_109ec8:
    // 0x109ec8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x109EC8u;
    SET_GPR_U32(ctx, 31, 0x109ED0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x109EC8u, 0x109ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109ED0u;
label_109ed0:
    // 0x109ed0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x109ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109ed4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x109ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109ed8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x109ed8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x109edc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x109EDCu;
    {
        const bool branch_taken_0x109edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x109edc) {
            ctx->pc = 0x109EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109EDCu;
            // 0x109ee0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x109EE4u;
            goto label_109ee4;
        }
    }
    ctx->pc = 0x109EE4u;
label_109ee4:
    // 0x109ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109ee8: 0xa22502f4  sb          $a1, 0x2F4($s1)
    ctx->pc = 0x109ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x109eec: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x109eecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x109ef0: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x109ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x109ef4: 0x2010  mfhi        $a0
    ctx->pc = 0x109ef4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x109ef8: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x109ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x109efc: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x109EFCu;
    {
        const bool branch_taken_0x109efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109EFCu;
        // 0x109f00: 0xa22402f7  sb          $a0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109efc) {
            ctx->pc = 0x10A2A8u;
            goto label_10a2a8;
        }
    }
    ctx->pc = 0x109F04u;
label_109f04:
    // 0x109f04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x109f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x109f08: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x109f08u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x109f0c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109f10: 0x100000e4  b           . + 4 + (0xE4 << 2)
    ctx->pc = 0x109F10u;
    {
        const bool branch_taken_0x109f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F10u;
        // 0x109f14: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f10) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109F18u;
label_109f18:
    // 0x109f18: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x109f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x109f1c: 0x144000e3  bnez        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x109F1Cu;
    {
        const bool branch_taken_0x109f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F1Cu;
        // 0x109f20: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f1c) {
            ctx->pc = 0x10A2ACu;
            goto label_10a2ac;
        }
    }
    ctx->pc = 0x109F24u;
    // 0x109f24: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x109f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
    // 0x109f28: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x109f2c: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x109f2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x109f30: 0x5083000e  beql        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x109F30u;
    {
        const bool branch_taken_0x109f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x109f30) {
            ctx->pc = 0x109F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F30u;
            // 0x109f34: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F6Cu;
            goto label_109f6c;
        }
    }
    ctx->pc = 0x109F38u;
    // 0x109f38: 0x2882003d  slti        $v0, $a0, 0x3D
    ctx->pc = 0x109f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x109f3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109F3Cu;
    {
        const bool branch_taken_0x109f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F3Cu;
        // 0x109f40: 0x2882003a  slti        $v0, $a0, 0x3A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f3c) {
            ctx->pc = 0x109F5Cu;
            goto label_109f5c;
        }
    }
    ctx->pc = 0x109F44u;
    // 0x109f44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x109F44u;
    {
        const bool branch_taken_0x109f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F44u;
        // 0x109f48: 0x28820038  slti        $v0, $a0, 0x38 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)56) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f44) {
            ctx->pc = 0x109F7Cu;
            goto label_109f7c;
        }
    }
    ctx->pc = 0x109F4Cu;
    // 0x109f4c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x109F4Cu;
    {
        const bool branch_taken_0x109f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x109f4c) {
            ctx->pc = 0x109F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F4Cu;
            // 0x109f50: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F80u;
            goto label_109f80;
        }
    }
    ctx->pc = 0x109F54u;
    // 0x109f54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109F54u;
    {
        const bool branch_taken_0x109f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F54u;
        // 0x109f58: 0x8e2205f4  lw          $v0, 0x5F4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f54) {
            ctx->pc = 0x109F74u;
            goto label_109f74;
        }
    }
    ctx->pc = 0x109F5Cu;
label_109f5c:
    // 0x109f5c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x109f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x109f60: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109F60u;
    {
        const bool branch_taken_0x109f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x109f60) {
            ctx->pc = 0x109F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F60u;
            // 0x109f64: 0x8e220678  lw          $v0, 0x678($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F80u;
            goto label_109f80;
        }
    }
    ctx->pc = 0x109F68u;
    // 0x109f68: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x109f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
label_109f6c:
    // 0x109f6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109F6Cu;
    {
        const bool branch_taken_0x109f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F6Cu;
        // 0x109f70: 0x24420064  addiu       $v0, $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f6c) {
            ctx->pc = 0x109F78u;
            goto label_109f78;
        }
    }
    ctx->pc = 0x109F74u;
label_109f74:
    // 0x109f74: 0x24420032  addiu       $v0, $v0, 0x32
    ctx->pc = 0x109f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_109f78:
    // 0x109f78: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x109f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
label_109f7c:
    // 0x109f7c: 0x8e220678  lw          $v0, 0x678($s1)
    ctx->pc = 0x109f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1656)));
label_109f80:
    // 0x109f80: 0x84430046  lh          $v1, 0x46($v0)
    ctx->pc = 0x109f80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x109f84: 0x2463ffc9  addiu       $v1, $v1, -0x37
    ctx->pc = 0x109f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967241));
    // 0x109f88: 0x2c62001f  sltiu       $v0, $v1, 0x1F
    ctx->pc = 0x109f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x109f8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x109F8Cu;
    {
        const bool branch_taken_0x109f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109F8Cu;
        // 0x109f90: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109f8c) {
            ctx->pc = 0x109FACu;
            goto label_109fac;
        }
    }
    ctx->pc = 0x109F94u;
    // 0x109f94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x109f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x109f98: 0x2442baf0  addiu       $v0, $v0, -0x4510
    ctx->pc = 0x109f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949616));
    // 0x109f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x109f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x109fa0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x109fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109fa4: 0x800008  jr          $a0
    ctx->pc = 0x109FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x109FACu: goto label_109fac;
            case 0x109FFCu: goto label_109ffc;
            case 0x10A04Cu: goto label_10a04c;
            case 0x10A064u: goto label_10a064;
            case 0x10A094u: goto label_10a094;
            case 0x10A0C4u: goto label_10a0c4;
            case 0x10A0F8u: goto label_10a0f8;
            case 0x10A128u: goto label_10a128;
            case 0x10A15Cu: goto label_10a15c;
            case 0x10A190u: goto label_10a190;
            case 0x10A1C4u: goto label_10a1c4;
            case 0x10A210u: goto label_10a210;
            case 0x10A224u: goto label_10a224;
            case 0x10A240u: goto label_10a240;
            case 0x10A26Cu: goto label_10a26c;
            case 0x10A294u: goto label_10a294;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x109FACu;
label_109fac:
    // 0x109fac: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x109facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x109fb0: 0x8e2305f4  lw          $v1, 0x5F4($s1)
    ctx->pc = 0x109fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x109fb4: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x109fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x109fb8: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x109fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x109fbc: 0xae2205f8  sw          $v0, 0x5F8($s1)
    ctx->pc = 0x109fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
    // 0x109fc0: 0x28640082  slti        $a0, $v1, 0x82
    ctx->pc = 0x109fc0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x109fc4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109FC4u;
    {
        const bool branch_taken_0x109fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FC4u;
        // 0x109fc8: 0xae2305f4  sw          $v1, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fc4) {
            ctx->pc = 0x109FE8u;
            goto label_109fe8;
        }
    }
    ctx->pc = 0x109FCCu;
    // 0x109fcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109fd0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x109fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x109fd4: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x109fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x109fd8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x109fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x109fdc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x109fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x109fe0: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x109FE0u;
    {
        const bool branch_taken_0x109fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FE0u;
        // 0x109fe4: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109fe0) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109FE8u;
label_109fe8:
    // 0x109fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109fec: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x109fecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x109ff0: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x109ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x109ff4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x109FF4u;
    {
        const bool branch_taken_0x109ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FF4u;
        // 0x109ff8: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ff4) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x109FFCu;
label_109ffc:
    // 0x109ffc: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x109ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a000: 0x8e2305f4  lw          $v1, 0x5F4($s1)
    ctx->pc = 0x10a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a004: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x10a004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x10a008: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x10a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x10a00c: 0xae2205f8  sw          $v0, 0x5F8($s1)
    ctx->pc = 0x10a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
    // 0x10a010: 0x28640082  slti        $a0, $v1, 0x82
    ctx->pc = 0x10a010u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x10a014: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10A014u;
    {
        const bool branch_taken_0x10a014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A014u;
        // 0x10a018: 0xae2305f4  sw          $v1, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a014) {
            ctx->pc = 0x10A038u;
            goto label_10a038;
        }
    }
    ctx->pc = 0x10A01Cu;
    // 0x10a01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a020: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10a020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10a024: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x10a024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a028: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x10a028u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a02c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a02cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a030: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x10A030u;
    {
        const bool branch_taken_0x10a030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A030u;
        // 0x10a034: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a030) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A038u;
label_10a038:
    // 0x10a038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a03c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a03cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a040: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x10a040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a044: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x10A044u;
    {
        const bool branch_taken_0x10a044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A044u;
        // 0x10a048: 0xa22002f5  sb          $zero, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a044) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A04Cu;
label_10a04c:
    // 0x10a04c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a050: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a054: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x10a054u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a058: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x10a058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a05c: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x10A05Cu;
    {
        const bool branch_taken_0x10a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A05Cu;
        // 0x10a060: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a05c) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A064u;
label_10a064:
    // 0x10a064: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a06c: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a070: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a074: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a078: 0xa22402f4  sb          $a0, 0x2F4($s1)
    ctx->pc = 0x10a078u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a07c: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a080: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a084: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a088: 0xa22502f5  sb          $a1, 0x2F5($s1)
    ctx->pc = 0x10a088u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x10a08c: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x10A08Cu;
    {
        const bool branch_taken_0x10a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A08Cu;
        // 0x10a090: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a08c) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A094u;
label_10a094:
    // 0x10a094: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a09c: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a0a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a0a4: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a0a8: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x10a0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a0ac: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a0b0: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a0b4: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a0b8: 0xa22502f5  sb          $a1, 0x2F5($s1)
    ctx->pc = 0x10a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
    // 0x10a0bc: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x10A0BCu;
    {
        const bool branch_taken_0x10a0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0BCu;
        // 0x10a0c0: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0bc) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A0C4u;
label_10a0c4:
    // 0x10a0c4: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a0c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a0cc: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a0d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a0d4: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a0d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x10a0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10a0dc: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a0e0: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x10a0e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a0e4: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a0e8: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a0ec: 0xa22602f4  sb          $a2, 0x2F4($s1)
    ctx->pc = 0x10a0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 6));
    // 0x10a0f0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x10A0F0u;
    {
        const bool branch_taken_0x10a0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0F0u;
        // 0x10a0f4: 0xa22502f5  sb          $a1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0f0) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A0F8u;
label_10a0f8:
    // 0x10a0f8: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a0fc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a100: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a108: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a10c: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x10a10cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a110: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a114: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a118: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a11c: 0xa22502f4  sb          $a1, 0x2F4($s1)
    ctx->pc = 0x10a11cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x10a120: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x10A120u;
    {
        const bool branch_taken_0x10a120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A120u;
        // 0x10a124: 0xa22402f5  sb          $a0, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a120) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A128u;
label_10a128:
    // 0x10a128: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a12c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a130: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a134: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a138: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a13c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10a140: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a144: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x10a144u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a148: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a148u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a14c: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a150: 0xa22602f4  sb          $a2, 0x2F4($s1)
    ctx->pc = 0x10a150u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 6));
    // 0x10a154: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x10A154u;
    {
        const bool branch_taken_0x10a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A154u;
        // 0x10a158: 0xa22502f5  sb          $a1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a154) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A15Cu;
label_10a15c:
    // 0x10a15c: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a160: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a164: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a168: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a16c: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a170: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x10a170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10a174: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a178: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x10a178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a17c: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a17cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a180: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a184: 0xa22602f4  sb          $a2, 0x2F4($s1)
    ctx->pc = 0x10a184u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 6));
    // 0x10a188: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x10A188u;
    {
        const bool branch_taken_0x10a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A188u;
        // 0x10a18c: 0xa22502f5  sb          $a1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a188) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A190u;
label_10a190:
    // 0x10a190: 0x8e2305f8  lw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a194: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10a194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a198: 0x8e2205f4  lw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a19c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x10a19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a1a0: 0x24630096  addiu       $v1, $v1, 0x96
    ctx->pc = 0x10a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 150));
    // 0x10a1a4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x10a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10a1a8: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x10a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x10a1ac: 0xa22402f7  sb          $a0, 0x2F7($s1)
    ctx->pc = 0x10a1acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a1b0: 0xae2305f8  sw          $v1, 0x5F8($s1)
    ctx->pc = 0x10a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 3));
    // 0x10a1b4: 0xae2205f4  sw          $v0, 0x5F4($s1)
    ctx->pc = 0x10a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 2));
    // 0x10a1b8: 0xa22602f4  sb          $a2, 0x2F4($s1)
    ctx->pc = 0x10a1b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 6));
    // 0x10a1bc: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x10A1BCu;
    {
        const bool branch_taken_0x10a1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A1BCu;
        // 0x10a1c0: 0xa22502f5  sb          $a1, 0x2F5($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a1bc) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A1C4u;
label_10a1c4:
    // 0x10a1c4: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x10a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a1c8: 0x8e2305f4  lw          $v1, 0x5F4($s1)
    ctx->pc = 0x10a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a1cc: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x10a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x10a1d0: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x10a1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x10a1d4: 0xae2205f8  sw          $v0, 0x5F8($s1)
    ctx->pc = 0x10a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
    // 0x10a1d8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10A1D8u;
    SET_GPR_U32(ctx, 31, 0x10A1E0u);
    ctx->pc = 0x10A1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A1D8u;
    // 0x10a1dc: 0xae2305f4  sw          $v1, 0x5F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10A1D8u, 0x10A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A1E0u;
label_10a1e0:
    // 0x10a1e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10a1e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a1e8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x10a1e8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10a1ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10A1ECu;
    {
        const bool branch_taken_0x10a1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a1ec) {
            ctx->pc = 0x10A1F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A1ECu;
            // 0x10a1f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A1F4u;
            goto label_10a1f4;
        }
    }
    ctx->pc = 0x10A1F4u;
label_10a1f4:
    // 0x10a1f4: 0xa22502f4  sb          $a1, 0x2F4($s1)
    ctx->pc = 0x10a1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 5));
    // 0x10a1f8: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x10a1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a1fc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10a1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a200: 0x2010  mfhi        $a0
    ctx->pc = 0x10a200u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x10a204: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x10a204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x10a208: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10A208u;
    {
        const bool branch_taken_0x10a208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A208u;
        // 0x10a20c: 0xa22402f7  sb          $a0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a208) {
            ctx->pc = 0x10A2A8u;
            goto label_10a2a8;
        }
    }
    ctx->pc = 0x10A210u;
label_10a210:
    // 0x10a210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a214: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a214u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a218: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x10a218u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a21c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10A21Cu;
    {
        const bool branch_taken_0x10a21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A21Cu;
        // 0x10a220: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a21c) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A224u;
label_10a224:
    // 0x10a224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a228: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x10a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10a22c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x10a22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a230: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x10a230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a234: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a238: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x10A238u;
    {
        const bool branch_taken_0x10a238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A238u;
        // 0x10a23c: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a238) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A240u;
label_10a240:
    // 0x10a240: 0x8e2205f8  lw          $v0, 0x5F8($s1)
    ctx->pc = 0x10a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1528)));
    // 0x10a244: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a248: 0x8e2305f4  lw          $v1, 0x5F4($s1)
    ctx->pc = 0x10a248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1524)));
    // 0x10a24c: 0x24420096  addiu       $v0, $v0, 0x96
    ctx->pc = 0x10a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
    // 0x10a250: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x10a250u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x10a254: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x10a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x10a258: 0xae2205f8  sw          $v0, 0x5F8($s1)
    ctx->pc = 0x10a258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1528), GPR_U32(ctx, 2));
    // 0x10a25c: 0xae2305f4  sw          $v1, 0x5F4($s1)
    ctx->pc = 0x10a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 3));
    // 0x10a260: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a264: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10A264u;
    {
        const bool branch_taken_0x10a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A264u;
        // 0x10a268: 0xa22402f4  sb          $a0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a264) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A26Cu;
label_10a26c:
    // 0x10a26c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x10a26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x10a270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a274: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a278: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x10a278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x10a27c: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x10a27cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a280: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x10a280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
    // 0x10a284: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x10a284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x10a288: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a288u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a28c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10A28Cu;
    {
        const bool branch_taken_0x10a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A28Cu;
        // 0x10a290: 0xae2005f4  sw          $zero, 0x5F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a28c) {
            ctx->pc = 0x10A2A4u;
            goto label_10a2a4;
        }
    }
    ctx->pc = 0x10A294u;
label_10a294:
    // 0x10a294: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x10a294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x10a298: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x10a298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10a29c: 0xa22202f5  sb          $v0, 0x2F5($s1)
    ctx->pc = 0x10a29cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x10a2a0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x10a2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_10a2a4:
    // 0x10a2a4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10a2a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_10a2a8:
    // 0x10a2a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10a2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10a2ac:
    // 0x10a2ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10a2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10a2b0:
    // 0x10a2b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10a2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10a2b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10a2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10a2b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10a2b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a2bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10a2bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A2C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A2C0u;
        // 0x10a2c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A2C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A2C8u;
}
