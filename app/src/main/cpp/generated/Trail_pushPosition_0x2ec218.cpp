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

// Function: Trail_pushPosition
// Address: 0x2ec218 - 0x2ec310
void Trail_pushPosition_0x2ec218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trail_pushPosition_0x2ec218");
#endif

    switch (ctx->pc) {
        case 0x2ec22cu: goto label_2ec22c;
        case 0x2ec240u: goto label_2ec240;
        case 0x2ec280u: goto label_2ec280;
        case 0x2ec2d8u: goto label_2ec2d8;
        default: break;
    }

    ctx->pc = 0x2ec218u;

    // 0x2ec218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ec218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ec21c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ec21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ec220: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ec220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ec224: 0xc0bb0c4  jal         func_2EC310
    ctx->pc = 0x2EC224u;
    SET_GPR_U32(ctx, 31, 0x2EC22Cu);
    ctx->pc = 0x2EC228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC224u;
    // 0x2ec228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC310u, 0x2EC224u, 0x2EC22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC22Cu;
label_2ec22c:
    // 0x2ec22c: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2ec22cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2ec230: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2ec230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ec234: 0x58800010  blezl       $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EC234u;
    {
        const bool branch_taken_0x2ec234 = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x2ec234) {
            ctx->pc = 0x2EC238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC234u;
            // 0x2ec238: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC278u;
            goto label_2ec278;
        }
    }
    ctx->pc = 0x2EC23Cu;
    // 0x2ec23c: 0x8e0302bc  lw          $v1, 0x2BC($s0)
    ctx->pc = 0x2ec23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_2ec240:
    // 0x2ec240: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ec244: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ec244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ec248: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x2ec248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x2ec24c: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC24Cu;
    {
        const bool branch_taken_0x2ec24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EC250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC24Cu;
        // 0x2ec250: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec24c) {
            ctx->pc = 0x2EC26Cu;
            goto label_2ec26c;
        }
    }
    ctx->pc = 0x2EC254u;
    // 0x2ec254: 0xc440fff0  lwc1        $f0, -0x10($v0)
    ctx->pc = 0x2ec254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec258: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ec258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ec25c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2ec25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec260: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ec260u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ec264: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2ec264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec268: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ec268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ec26c:
    // 0x2ec26c: 0x5c80fff4  bgtzl       $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2EC26Cu;
    {
        const bool branch_taken_0x2ec26c = (GPR_S64(ctx, 4) > 0);
        if (branch_taken_0x2ec26c) {
            ctx->pc = 0x2EC270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC26Cu;
            // 0x2ec270: 0x8e0302bc  lw          $v1, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec240;
        }
    }
    ctx->pc = 0x2EC274u;
    // 0x2ec274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ec274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ec278:
    // 0x2ec278: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EC278u;
    SET_GPR_U32(ctx, 31, 0x2EC280u);
    ctx->pc = 0x2EC27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC278u;
    // 0x2ec27c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EC278u, 0x2EC280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC280u;
label_2ec280:
    // 0x2ec280: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2ec280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2ec284: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC284u;
    {
        const bool branch_taken_0x2ec284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2EC288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC284u;
        // 0x2ec288: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec284) {
            ctx->pc = 0x2EC2A0u;
            goto label_2ec2a0;
        }
    }
    ctx->pc = 0x2EC28Cu;
    // 0x2ec28c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2ec28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2ec290: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2ec290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ec294: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ec294u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ec298: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ec298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ec29c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ec29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ec2a0:
    // 0x2ec2a0: 0x8e02011c  lw          $v0, 0x11C($s0)
    ctx->pc = 0x2ec2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2ec2a4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2ec2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2ec2a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ec2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ec2ac: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EC2ACu;
    {
        const bool branch_taken_0x2ec2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec2ac) {
            ctx->pc = 0x2EC2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC2ACu;
            // 0x2ec2b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC300u;
            goto label_2ec300;
        }
    }
    ctx->pc = 0x2EC2B4u;
    // 0x2ec2b4: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2ec2b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2ec2b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ec2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ec2bc: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EC2BCu;
    {
        const bool branch_taken_0x2ec2bc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2EC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC2BCu;
        // 0x2ec2c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec2bc) {
            ctx->pc = 0x2EC2FCu;
            goto label_2ec2fc;
        }
    }
    ctx->pc = 0x2EC2C4u;
    // 0x2ec2c4: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2ec2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2ec2c8: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x2ec2c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x2ec2cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ec2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ec2d0: 0x8e0202bc  lw          $v0, 0x2BC($s0)
    ctx->pc = 0x2ec2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
    // 0x2ec2d4: 0x0  nop
    ctx->pc = 0x2ec2d4u;
    // NOP
label_2ec2d8:
    // 0x2ec2d8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x2ec2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ec2dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ec2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2ec2e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ec2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec2e4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2ec2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2ec2e8: 0x82020249  lb          $v0, 0x249($s0)
    ctx->pc = 0x2ec2e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 585)));
    // 0x2ec2ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2ec2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2ec2f0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ec2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ec2f4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2EC2F4u;
    {
        const bool branch_taken_0x2ec2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ec2f4) {
            ctx->pc = 0x2EC2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC2F4u;
            // 0x2ec2f8: 0x8e0202bc  lw          $v0, 0x2BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC2D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ec2d8;
        }
    }
    ctx->pc = 0x2EC2FCu;
label_2ec2fc:
    // 0x2ec2fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ec2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ec300:
    // 0x2ec300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ec300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec304: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC304u;
        // 0x2ec308: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC30Cu;
    // 0x2ec30c: 0x0  nop
    ctx->pc = 0x2ec30cu;
    // NOP
    ctx->pc = 0x2ec310u;
}
