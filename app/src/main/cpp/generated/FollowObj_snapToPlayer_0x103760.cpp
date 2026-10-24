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

// Function: FollowObj_snapToPlayer
// Address: 0x103760 - 0x103880
void FollowObj_snapToPlayer_0x103760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FollowObj_snapToPlayer_0x103760");
#endif

    switch (ctx->pc) {
        case 0x10377cu: goto label_10377c;
        case 0x1037d4u: goto label_1037d4;
        case 0x103804u: goto label_103804;
        default: break;
    }

    ctx->pc = 0x103760u;

    // 0x103760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x103764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x103768: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x103768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10376c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10376cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x103774: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x103774u;
    SET_GPR_U32(ctx, 31, 0x10377Cu);
    ctx->pc = 0x103778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103774u;
    // 0x103778: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x103774u, 0x10377Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10377Cu;
label_10377c:
    // 0x10377c: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x10377cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x103780: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x103780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x103784: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x103784u;
    {
        const bool branch_taken_0x103784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x103784) {
            ctx->pc = 0x103788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x103784u;
            // 0x103788: 0x26030490  addiu       $v1, $s0, 0x490 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1037ACu;
            goto label_1037ac;
        }
    }
    ctx->pc = 0x10378Cu;
    // 0x10378c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x10378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x103790: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x103790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x103794: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x103794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x103798: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x103798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x10379c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x10379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1037a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1037a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1037a4: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1037a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1037a8: 0x26030490  addiu       $v1, $s0, 0x490
    ctx->pc = 0x1037a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
label_1037ac:
    // 0x1037ac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1037ACu;
    {
        const bool branch_taken_0x1037ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1037ac) {
            ctx->pc = 0x1037CCu;
            goto label_1037cc;
        }
    }
    ctx->pc = 0x1037B4u;
    // 0x1037b4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1037b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1037b8: 0xe6000490  swc1        $f0, 0x490($s0)
    ctx->pc = 0x1037b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1168), bits); }
    // 0x1037bc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1037bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1037c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x1037c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1037c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1037c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1037c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1037c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1037cc:
    // 0x1037cc: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1037CCu;
    SET_GPR_U32(ctx, 31, 0x1037D4u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1037CCu, 0x1037D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1037D4u;
label_1037d4:
    // 0x1037d4: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1037d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1037d8: 0x24430100  addiu       $v1, $v0, 0x100
    ctx->pc = 0x1037d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1037dc: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1037DCu;
    {
        const bool branch_taken_0x1037dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1037dc) {
            ctx->pc = 0x1037FCu;
            goto label_1037fc;
        }
    }
    ctx->pc = 0x1037E4u;
    // 0x1037e4: 0xc4400100  lwc1        $f0, 0x100($v0)
    ctx->pc = 0x1037e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1037e8: 0xe6000100  swc1        $f0, 0x100($s0)
    ctx->pc = 0x1037e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    // 0x1037ec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1037ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1037f0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1037f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1037f4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1037f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1037f8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1037f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1037fc:
    // 0x1037fc: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x1037FCu;
    SET_GPR_U32(ctx, 31, 0x103804u);
    ctx->pc = 0x103800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1037FCu;
    // 0x103800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x1037FCu, 0x103804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103804u;
label_103804:
    // 0x103804: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x103804u;
    {
        const bool branch_taken_0x103804 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x103808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103804u;
        // 0x103808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103804) {
            ctx->pc = 0x103814u;
            goto label_103814;
        }
    }
    ctx->pc = 0x10380Cu;
    // 0x10380c: 0x52220009  beql        $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10380Cu;
    {
        const bool branch_taken_0x10380c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x10380c) {
            ctx->pc = 0x103810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10380Cu;
            // 0x103810: 0x8e040250  lw          $a0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x103834u;
            goto label_103834;
        }
    }
    ctx->pc = 0x103814u;
label_103814:
    // 0x103814: 0x8e0214b0  lw          $v0, 0x14B0($s0)
    ctx->pc = 0x103814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
    // 0x103818: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x103818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x10381c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x10381cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x103820: 0xae0014b4  sw          $zero, 0x14B4($s0)
    ctx->pc = 0x103820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5300), GPR_U32(ctx, 0));
    // 0x103824: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x103828: 0xa20402f5  sb          $a0, 0x2F5($s0)
    ctx->pc = 0x103828u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 4));
    // 0x10382c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10382Cu;
    {
        const bool branch_taken_0x10382c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10382Cu;
        // 0x103830: 0xae0214b0  sw          $v0, 0x14B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10382c) {
            ctx->pc = 0x103860u;
            goto label_103860;
        }
    }
    ctx->pc = 0x103834u;
label_103834:
    // 0x103834: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x103834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x103838: 0x8e0314b0  lw          $v1, 0x14B0($s0)
    ctx->pc = 0x103838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5296)));
    // 0x10383c: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x10383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
    // 0x103840: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x103840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x103844: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x103844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x103848: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x103848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x10384c: 0x2402012c  addiu       $v0, $zero, 0x12C
    ctx->pc = 0x10384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x103850: 0xae0214b4  sw          $v0, 0x14B4($s0)
    ctx->pc = 0x103850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5300), GPR_U32(ctx, 2));
    // 0x103854: 0xae040250  sw          $a0, 0x250($s0)
    ctx->pc = 0x103854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 4));
    // 0x103858: 0xae0314b0  sw          $v1, 0x14B0($s0)
    ctx->pc = 0x103858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5296), GPR_U32(ctx, 3));
    // 0x10385c: 0xa20502f5  sb          $a1, 0x2F5($s0)
    ctx->pc = 0x10385cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 5));
label_103860:
    // 0x103860: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x103860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x103864: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x103864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x103868: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x103868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10386c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10386cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x103870: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x103870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103878: 0x3e00008  jr          $ra
    ctx->pc = 0x103878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103878u;
        // 0x10387c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103880u;
}
