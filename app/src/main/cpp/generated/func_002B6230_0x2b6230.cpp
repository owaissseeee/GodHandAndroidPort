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

// Function: func_002B6230
// Address: 0x2b6230 - 0x2b6288
void func_002B6230_0x2b6230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6230_0x2b6230");
#endif

    switch (ctx->pc) {
        case 0x2b624cu: goto label_2b624c;
        default: break;
    }

    ctx->pc = 0x2b6230u;

    // 0x2b6230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6234: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b6234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b6238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b623c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b623cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6244: 0xc0ad900  jal         func_2B6400
    ctx->pc = 0x2B6244u;
    SET_GPR_U32(ctx, 31, 0x2B624Cu);
    ctx->pc = 0x2B6248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6244u;
    // 0x2b6248: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6400u, 0x2B6244u, 0x2B624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B624Cu;
label_2b624c:
    // 0x2b624c: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x2b624cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2b6250: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6250u;
    {
        const bool branch_taken_0x2b6250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2b6250) {
            ctx->pc = 0x2B6254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6250u;
            // 0x2b6254: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6274u;
            goto label_2b6274;
        }
    }
    ctx->pc = 0x2B6258u;
    // 0x2b6258: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b6258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b625c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x2b625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2b6260: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2b6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6264: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2b6264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2b6268: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2b6268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b626c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2b626cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2b6270: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b6270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6274:
    // 0x2b6274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b627c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B627Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B627Cu;
        // 0x2b6280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B627Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6284u;
    // 0x2b6284: 0x0  nop
    ctx->pc = 0x2b6284u;
    // NOP
    ctx->pc = 0x2b6288u;
}
