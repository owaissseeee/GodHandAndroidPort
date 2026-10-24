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

// Function: func_001C0068
// Address: 0x1c0068 - 0x1c00c8
void func_001C0068_0x1c0068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C0068_0x1c0068");
#endif

    switch (ctx->pc) {
        case 0x1c007cu: goto label_1c007c;
        default: break;
    }

    ctx->pc = 0x1c0068u;

    // 0x1c0068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c0068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c006c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c006cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c0070: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0074: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1C0074u;
    SET_GPR_U32(ctx, 31, 0x1C007Cu);
    ctx->pc = 0x1C0078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0074u;
    // 0x1c0078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1C0074u, 0x1C007Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C007Cu;
label_1c007c:
    // 0x1c007c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c007cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c0080: 0x24639b88  addiu       $v1, $v1, -0x6478
    ctx->pc = 0x1c0080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941576));
    // 0x1c0084: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1c0084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1c0088: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1c0088u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c008c: 0xfa000640  sqc2        $vf0, 0x640($s0)
    ctx->pc = 0x1c008cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1600), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c0090: 0xfa000650  sqc2        $vf0, 0x650($s0)
    ctx->pc = 0x1c0090u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1616), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c0094: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c0094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c0098: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c0098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c009c: 0x246398b0  addiu       $v1, $v1, -0x6750
    ctx->pc = 0x1c009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940848));
    // 0x1c00a0: 0xa2000677  sb          $zero, 0x677($s0)
    ctx->pc = 0x1c00a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1655), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c00a4: 0xae0304ac  sw          $v1, 0x4AC($s0)
    ctx->pc = 0x1c00a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 3));
    // 0x1c00a8: 0xa6000662  sh          $zero, 0x662($s0)
    ctx->pc = 0x1c00a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1634), (uint16_t)GPR_U32(ctx, 0));
    // 0x1c00ac: 0xa2000676  sb          $zero, 0x676($s0)
    ctx->pc = 0x1c00acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1654), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c00b0: 0xfe000668  sd          $zero, 0x668($s0)
    ctx->pc = 0x1c00b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1640), GPR_U64(ctx, 0));
    // 0x1c00b4: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x1c00b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x1c00b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c00b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c00bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00C0u;
        // 0x1c00c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00C8u;
}
