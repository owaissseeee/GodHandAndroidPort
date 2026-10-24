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

// Function: cOmShake_updateHeight
// Address: 0x1ac908 - 0x1ac980
void cOmShake_updateHeight_0x1ac908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmShake_updateHeight_0x1ac908");
#endif

    switch (ctx->pc) {
        case 0x1ac93cu: goto label_1ac93c;
        default: break;
    }

    ctx->pc = 0x1ac908u;

    // 0x1ac908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac90c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ac90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ac910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac918: 0x86020610  lh          $v0, 0x610($s0)
    ctx->pc = 0x1ac918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1552)));
    // 0x1ac91c: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AC91Cu;
    {
        const bool branch_taken_0x1ac91c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC91Cu;
        // 0x1ac920: 0x96030610  lhu         $v1, 0x610($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac91c) {
            ctx->pc = 0x1AC96Cu;
            goto label_1ac96c;
        }
    }
    ctx->pc = 0x1AC924u;
    // 0x1ac924: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1ac924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ac928: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1ac928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1ac92c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AC92Cu;
    {
        const bool branch_taken_0x1ac92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC92Cu;
        // 0x1ac930: 0xa6020610  sh          $v0, 0x610($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1552), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac92c) {
            ctx->pc = 0x1AC960u;
            goto label_1ac960;
        }
    }
    ctx->pc = 0x1AC934u;
    // 0x1ac934: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1AC934u;
    SET_GPR_U32(ctx, 31, 0x1AC93Cu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1AC934u, 0x1AC93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC93Cu;
label_1ac93c:
    // 0x1ac93c: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1ac93cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1ac940: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1ac940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1ac944: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ac944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ac948: 0xc6010614  lwc1        $f1, 0x614($s0)
    ctx->pc = 0x1ac948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac94c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ac94cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ac950: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1ac950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ac954: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1ac954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ac958: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AC958u;
    {
        const bool branch_taken_0x1ac958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC958u;
        // 0x1ac95c: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac958) {
            ctx->pc = 0x1AC96Cu;
            goto label_1ac96c;
        }
    }
    ctx->pc = 0x1AC960u;
label_1ac960:
    // 0x1ac960: 0xc6000614  lwc1        $f0, 0x614($s0)
    ctx->pc = 0x1ac960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ac964: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1ac964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1ac968: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ac968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1ac96c:
    // 0x1ac96c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ac96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ac970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ac974: 0x3e00008  jr          $ra
    ctx->pc = 0x1AC974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC974u;
        // 0x1ac978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC97Cu;
    // 0x1ac97c: 0x0  nop
    ctx->pc = 0x1ac97cu;
    // NOP
    ctx->pc = 0x1ac980u;
}
