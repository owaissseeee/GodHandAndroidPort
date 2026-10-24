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

// Function: cScenario_beginCasinoBattle
// Address: 0x2c4940 - 0x2c4a18
void cScenario_beginCasinoBattle_0x2c4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_beginCasinoBattle_0x2c4940");
#endif

    switch (ctx->pc) {
        case 0x2c4940u: goto label_2c4940;
        case 0x2c4944u: goto label_2c4944;
        case 0x2c4948u: goto label_2c4948;
        case 0x2c494cu: goto label_2c494c;
        case 0x2c4950u: goto label_2c4950;
        case 0x2c4954u: goto label_2c4954;
        case 0x2c4958u: goto label_2c4958;
        case 0x2c495cu: goto label_2c495c;
        case 0x2c4960u: goto label_2c4960;
        case 0x2c4964u: goto label_2c4964;
        case 0x2c4968u: goto label_2c4968;
        case 0x2c496cu: goto label_2c496c;
        case 0x2c4970u: goto label_2c4970;
        case 0x2c4974u: goto label_2c4974;
        case 0x2c4978u: goto label_2c4978;
        case 0x2c497cu: goto label_2c497c;
        case 0x2c4980u: goto label_2c4980;
        case 0x2c4984u: goto label_2c4984;
        case 0x2c4988u: goto label_2c4988;
        case 0x2c498cu: goto label_2c498c;
        case 0x2c4990u: goto label_2c4990;
        case 0x2c4994u: goto label_2c4994;
        case 0x2c4998u: goto label_2c4998;
        case 0x2c499cu: goto label_2c499c;
        case 0x2c49a0u: goto label_2c49a0;
        case 0x2c49a4u: goto label_2c49a4;
        case 0x2c49a8u: goto label_2c49a8;
        case 0x2c49acu: goto label_2c49ac;
        case 0x2c49b0u: goto label_2c49b0;
        case 0x2c49b4u: goto label_2c49b4;
        case 0x2c49b8u: goto label_2c49b8;
        case 0x2c49bcu: goto label_2c49bc;
        case 0x2c49c0u: goto label_2c49c0;
        case 0x2c49c4u: goto label_2c49c4;
        case 0x2c49c8u: goto label_2c49c8;
        case 0x2c49ccu: goto label_2c49cc;
        case 0x2c49d0u: goto label_2c49d0;
        case 0x2c49d4u: goto label_2c49d4;
        case 0x2c49d8u: goto label_2c49d8;
        case 0x2c49dcu: goto label_2c49dc;
        case 0x2c49e0u: goto label_2c49e0;
        case 0x2c49e4u: goto label_2c49e4;
        case 0x2c49e8u: goto label_2c49e8;
        case 0x2c49ecu: goto label_2c49ec;
        case 0x2c49f0u: goto label_2c49f0;
        case 0x2c49f4u: goto label_2c49f4;
        case 0x2c49f8u: goto label_2c49f8;
        case 0x2c49fcu: goto label_2c49fc;
        case 0x2c4a00u: goto label_2c4a00;
        case 0x2c4a04u: goto label_2c4a04;
        case 0x2c4a08u: goto label_2c4a08;
        case 0x2c4a0cu: goto label_2c4a0c;
        case 0x2c4a10u: goto label_2c4a10;
        case 0x2c4a14u: goto label_2c4a14;
        default: break;
    }

    ctx->pc = 0x2c4940u;

label_2c4940:
    // 0x2c4940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c4940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c4944:
    // 0x2c4944: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c4944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_2c4948:
    // 0x2c4948: 0x8c649b70  lw          $a0, -0x6490($v1)
    ctx->pc = 0x2c4948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941552)));
label_2c494c:
    // 0x2c494c: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2c494cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_2c4950:
    // 0x2c4950: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c4950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c4954:
    // 0x2c4954: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2c4954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2c4958:
    // 0x2c4958: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2c4958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2c495c:
    // 0x2c495c: 0xc0b6dac  jal         func_2DB6B0
label_2c4960:
    if (ctx->pc == 0x2C4960u) {
        ctx->pc = 0x2C4960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C495Cu;
        // 0x2c4960: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4964u;
        goto label_2c4964;
    }
    ctx->pc = 0x2C495Cu;
    SET_GPR_U32(ctx, 31, 0x2C4964u);
    ctx->pc = 0x2C4960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C495Cu;
    // 0x2c4960: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C495Cu, 0x2C4964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4964u;
label_2c4964:
    // 0x2c4964: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x2c4964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2c4968:
    // 0x2c4968: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2c4968u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2c496c:
    // 0x2c496c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2c496cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2c4970:
    // 0x2c4970: 0xa0f809  jalr        $a1
label_2c4974:
    if (ctx->pc == 0x2C4974u) {
        ctx->pc = 0x2C4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4970u;
        // 0x2c4974: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4978u;
        goto label_2c4978;
    }
    ctx->pc = 0x2C4970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C4978u);
        ctx->pc = 0x2C4974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4970u;
        // 0x2c4974: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4970u, 0x2C4978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C4978u;
label_2c4978:
    // 0x2c4978: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2c4978u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c497c:
    // 0x2c497c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2c497cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_2c4980:
    // 0x2c4980: 0xc0b6dac  jal         func_2DB6B0
label_2c4984:
    if (ctx->pc == 0x2C4984u) {
        ctx->pc = 0x2C4988u;
        goto label_2c4988;
    }
    ctx->pc = 0x2C4980u;
    SET_GPR_U32(ctx, 31, 0x2C4988u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x2C4980u, 0x2C4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4988u;
label_2c4988:
    // 0x2c4988: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x2c4988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_2c498c:
    // 0x2c498c: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x2c498cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_2c4990:
    // 0x2c4990: 0x8c65008c  lw          $a1, 0x8C($v1)
    ctx->pc = 0x2c4990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_2c4994:
    // 0x2c4994: 0xa0f809  jalr        $a1
label_2c4998:
    if (ctx->pc == 0x2C4998u) {
        ctx->pc = 0x2C4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4994u;
        // 0x2c4998: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C499Cu;
        goto label_2c499c;
    }
    ctx->pc = 0x2C4994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2C499Cu);
        ctx->pc = 0x2C4998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4994u;
        // 0x2c4998: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4994u, 0x2C499Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C499Cu;
label_2c499c:
    // 0x2c499c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2c499cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c49a0:
    // 0x2c49a0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2c49a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_2c49a4:
    // 0x2c49a4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c49a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c49a8:
    // 0x2c49a8: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x2c49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_2c49ac:
    // 0x2c49ac: 0xa4400016  sh          $zero, 0x16($v0)
    ctx->pc = 0x2c49acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 0));
label_2c49b0:
    // 0x2c49b0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x2c49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_2c49b4:
    // 0x2c49b4: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
label_2c49b8:
    if (ctx->pc == 0x2C49B8u) {
        ctx->pc = 0x2C49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49B4u;
        // 0x2c49b8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49BCu;
        goto label_2c49bc;
    }
    ctx->pc = 0x2C49B4u;
    {
        const bool branch_taken_0x2c49b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2C49B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49B4u;
        // 0x2c49b8: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c49b4) {
            ctx->pc = 0x2C49D4u;
            goto label_2c49d4;
        }
    }
    ctx->pc = 0x2C49BCu;
label_2c49bc:
    // 0x2c49bc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2c49bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2c49c0:
    // 0x2c49c0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2c49c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c49c4:
    // 0x2c49c4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2c49c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2c49c8:
    // 0x2c49c8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2c49c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c49cc:
    // 0x2c49cc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2c49ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c49d0:
    // 0x2c49d0: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x2c49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12164)));
label_2c49d4:
    // 0x2c49d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c49d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c49d8:
    // 0x2c49d8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2c49d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c49dc:
    // 0x2c49dc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2c49dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2c49e0:
    // 0x2c49e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c49e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c49e4:
    // 0x2c49e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c49e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c49e8:
    // 0x2c49e8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c49e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c49ec:
    // 0x2c49ec: 0xc0b016c  jal         func_2C05B0
label_2c49f0:
    if (ctx->pc == 0x2C49F0u) {
        ctx->pc = 0x2C49F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C49ECu;
        // 0x2c49f0: 0x8c64264c  lw          $a0, 0x264C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C49F4u;
        goto label_2c49f4;
    }
    ctx->pc = 0x2C49ECu;
    SET_GPR_U32(ctx, 31, 0x2C49F4u);
    ctx->pc = 0x2C49F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C49ECu;
    // 0x2c49f0: 0x8c64264c  lw          $a0, 0x264C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x2C49ECu, 0x2C49F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C49F4u;
label_2c49f4:
    // 0x2c49f4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2c49f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_2c49f8:
    // 0x2c49f8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2c49f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2c49fc:
    // 0x2c49fc: 0x8c827a24  lw          $v0, 0x7A24($a0)
    ctx->pc = 0x2c49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 31268)));
label_2c4a00:
    // 0x2c4a00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c4a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c4a04:
    // 0x2c4a04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c4a08:
    // 0x2c4a08: 0xac827a24  sw          $v0, 0x7A24($a0)
    ctx->pc = 0x2c4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 2));
label_2c4a0c:
    // 0x2c4a0c: 0x3e00008  jr          $ra
label_2c4a10:
    if (ctx->pc == 0x2C4A10u) {
        ctx->pc = 0x2C4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A0Cu;
        // 0x2c4a10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C4A14u;
        goto label_2c4a14;
    }
    ctx->pc = 0x2C4A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A0Cu;
        // 0x2c4a10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4A14u;
label_2c4a14:
    // 0x2c4a14: 0x0  nop
    ctx->pc = 0x2c4a14u;
    // NOP
    ctx->pc = 0x2c4a18u;
}
