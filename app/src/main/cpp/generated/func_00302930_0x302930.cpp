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

// Function: func_00302930
// Address: 0x302930 - 0x302988
void func_00302930_0x302930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00302930_0x302930");
#endif

    ctx->pc = 0x302930u;

    // 0x302930: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x302930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302934: 0x94e20224  lhu         $v0, 0x224($a3)
    ctx->pc = 0x302934u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x302938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302938u;
    {
        const bool branch_taken_0x302938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302938u;
        // 0x30293c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302938) {
            ctx->pc = 0x302948u;
            goto label_302948;
        }
    }
    ctx->pc = 0x302940u;
    // 0x302940: 0x3e00008  jr          $ra
    ctx->pc = 0x302940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x302944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302940u;
        // 0x302944: 0xa4e50224  sh          $a1, 0x224($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 548), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302948u;
label_302948:
    // 0x302948: 0xc4e00228  lwc1        $f0, 0x228($a3)
    ctx->pc = 0x302948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30294c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x302950: 0x94e30224  lhu         $v1, 0x224($a3)
    ctx->pc = 0x302950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 548)));
    // 0x302954: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x302954u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x302958: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x302958u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x30295c: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x30295cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x302960: 0x10c40005  beq         $a2, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x302960u;
    {
        const bool branch_taken_0x302960 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x302964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302960u;
        // 0x302964: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302960) {
            ctx->pc = 0x302978u;
            goto label_302978;
        }
    }
    ctx->pc = 0x302968u;
    // 0x302968: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x302968u;
    {
        const bool branch_taken_0x302968 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x30296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302968u;
        // 0x30296c: 0x45102a  slt         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x302968) {
            ctx->pc = 0x302980u;
            goto label_302980;
        }
    }
    ctx->pc = 0x302970u;
    // 0x302970: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x302970u;
    {
        const bool branch_taken_0x302970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x302970) {
            ctx->pc = 0x302980u;
            goto label_302980;
        }
    }
    ctx->pc = 0x302978u;
label_302978:
    // 0x302978: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x302978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x30297c: 0xa4e20224  sh          $v0, 0x224($a3)
    ctx->pc = 0x30297cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 548), (uint16_t)GPR_U32(ctx, 2));
label_302980:
    // 0x302980: 0x3e00008  jr          $ra
    ctx->pc = 0x302980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x302980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x302988u;
}
