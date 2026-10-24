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

// Function: func_0032F938
// Address: 0x32f938 - 0x32f988
void func_0032F938_0x32f938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F938_0x32f938");
#endif

    switch (ctx->pc) {
        case 0x32f954u: goto label_32f954;
        default: break;
    }

    ctx->pc = 0x32f938u;

    // 0x32f938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f93c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f940: 0x240618b8  addiu       $a2, $zero, 0x18B8
    ctx->pc = 0x32f940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6328));
    // 0x32f944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32f948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32f94c: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32F94Cu;
    SET_GPR_U32(ctx, 31, 0x32F954u);
    ctx->pc = 0x32F950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F94Cu;
    // 0x32f950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32F94Cu, 0x32F954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F954u;
label_32f954:
    // 0x32f954: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32f954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32f958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32f95c: 0xa603189a  sh          $v1, 0x189A($s0)
    ctx->pc = 0x32f95cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6298), (uint16_t)GPR_U32(ctx, 3));
    // 0x32f960: 0xa202000c  sb          $v0, 0xC($s0)
    ctx->pc = 0x32f960u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x32f964: 0xae030210  sw          $v1, 0x210($s0)
    ctx->pc = 0x32f964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 3));
    // 0x32f968: 0xae031894  sw          $v1, 0x1894($s0)
    ctx->pc = 0x32f968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6292), GPR_U32(ctx, 3));
    // 0x32f96c: 0xa6001898  sh          $zero, 0x1898($s0)
    ctx->pc = 0x32f96cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6296), (uint16_t)GPR_U32(ctx, 0));
    // 0x32f970: 0xa600189c  sh          $zero, 0x189C($s0)
    ctx->pc = 0x32f970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6300), (uint16_t)GPR_U32(ctx, 0));
    // 0x32f974: 0xa600189e  sh          $zero, 0x189E($s0)
    ctx->pc = 0x32f974u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6302), (uint16_t)GPR_U32(ctx, 0));
    // 0x32f978: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f97c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f97cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f980: 0x3e00008  jr          $ra
    ctx->pc = 0x32F980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F980u;
        // 0x32f984: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F988u;
}
