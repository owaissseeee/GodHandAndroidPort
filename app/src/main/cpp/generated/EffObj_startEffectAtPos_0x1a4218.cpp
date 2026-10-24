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

// Function: EffObj_startEffectAtPos
// Address: 0x1a4218 - 0x1a4298
void EffObj_startEffectAtPos_0x1a4218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffObj_startEffectAtPos_0x1a4218");
#endif

    switch (ctx->pc) {
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        default: break;
    }

    ctx->pc = 0x1a4218u;

label_1a4218:
    // 0x1a4218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a421c:
    // 0x1a421c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a4220:
    // 0x1a4220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4224:
    // 0x1a4224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4228:
    // 0x1a4228: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1a4228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1a422c:
    // 0x1a422c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1a422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1a4230:
    // 0x1a4230: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1a4230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1a4234:
    // 0x1a4234: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1a4234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1a4238:
    // 0x1a4238: 0x40f809  jalr        $v0
label_1a423c:
    if (ctx->pc == 0x1A423Cu) {
        ctx->pc = 0x1A423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4238u;
        // 0x1a423c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4240u;
        goto label_1a4240;
    }
    ctx->pc = 0x1A4238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4240u);
        ctx->pc = 0x1A423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4238u;
        // 0x1a423c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4238u, 0x1A4240u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4240u;
label_1a4240:
    // 0x1a4240: 0x53a20008  beql        $sp, $v0, . + 4 + (0x8 << 2)
label_1a4244:
    if (ctx->pc == 0x1A4244u) {
        ctx->pc = 0x1A4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4240u;
        // 0x1a4244: 0x8e0505ec  lw          $a1, 0x5EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4248u;
        goto label_1a4248;
    }
    ctx->pc = 0x1A4240u;
    {
        const bool branch_taken_0x1a4240 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4240) {
            ctx->pc = 0x1A4244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4240u;
            // 0x1a4244: 0x8e0505ec  lw          $a1, 0x5EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4264u;
            goto label_1a4264;
        }
    }
    ctx->pc = 0x1A4248u;
label_1a4248:
    // 0x1a4248: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1a4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a424c:
    // 0x1a424c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1a424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a4250:
    // 0x1a4250: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1a4250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4254:
    // 0x1a4254: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1a4254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a4258:
    // 0x1a4258: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1a4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a425c:
    // 0x1a425c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1a425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a4260:
    // 0x1a4260: 0x8e0505ec  lw          $a1, 0x5EC($s0)
    ctx->pc = 0x1a4260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1516)));
label_1a4264:
    // 0x1a4264: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a4264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4268:
    // 0x1a4268: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a4268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a426c:
    // 0x1a426c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a426cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a4270:
    // 0x1a4270: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a4270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4274:
    // 0x1a4274: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1a4274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4278:
    // 0x1a4278: 0xc0c1a0e  jal         func_306838
label_1a427c:
    if (ctx->pc == 0x1A427Cu) {
        ctx->pc = 0x1A427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4278u;
        // 0x1a427c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4280u;
        goto label_1a4280;
    }
    ctx->pc = 0x1A4278u;
    SET_GPR_U32(ctx, 31, 0x1A4280u);
    ctx->pc = 0x1A427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4278u;
    // 0x1a427c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x1A4278u, 0x1A4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4280u;
label_1a4280:
    // 0x1a4280: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a4280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4284:
    // 0x1a4284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4288:
    // 0x1a4288: 0x3e00008  jr          $ra
label_1a428c:
    if (ctx->pc == 0x1A428Cu) {
        ctx->pc = 0x1A428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4288u;
        // 0x1a428c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4290u;
        goto label_1a4290;
    }
    ctx->pc = 0x1A4288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4288u;
        // 0x1a428c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4290u;
label_1a4290:
    // 0x1a4290: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1a4290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a4294:
    // 0x1a4294: 0x0  nop
    ctx->pc = 0x1a4294u;
    // NOP
    ctx->pc = 0x1a4298u;
}
