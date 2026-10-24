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

// Function: cGameObj
// Address: 0x2a7338 - 0x2a73c8
void cGameObj_0x2a7338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_0x2a7338");
#endif

    switch (ctx->pc) {
        case 0x2a734cu: goto label_2a734c;
        default: break;
    }

    ctx->pc = 0x2a7338u;

    // 0x2a7338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a733c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a733cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a7340: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a7340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a7344: 0xc053a64  jal         func_14E990
    ctx->pc = 0x2A7344u;
    SET_GPR_U32(ctx, 31, 0x2A734Cu);
    ctx->pc = 0x2A7348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7344u;
    // 0x2a7348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E990u, 0x2A7344u, 0x2A734Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A734Cu;
label_2a734c:
    // 0x2a734c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x2a734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x2a7350: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a7350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a7354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a7354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a7358: 0x2463ae28  addiu       $v1, $v1, -0x51D8
    ctx->pc = 0x2a7358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946344));
    // 0x2a735c: 0x26020520  addiu       $v0, $s0, 0x520
    ctx->pc = 0x2a735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x2a7360: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x2a7360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x2a7364: 0xae000520  sw          $zero, 0x520($s0)
    ctx->pc = 0x2a7364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1312), GPR_U32(ctx, 0));
    // 0x2a7368: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2a7368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2a736c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a736cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a7370: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a7370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a7374: 0xfa000550  sqc2        $vf0, 0x550($s0)
    ctx->pc = 0x2a7374u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1360), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a7378: 0xfa000580  sqc2        $vf0, 0x580($s0)
    ctx->pc = 0x2a7378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a737c: 0xfa000590  sqc2        $vf0, 0x590($s0)
    ctx->pc = 0x2a737cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1424), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2a7380: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2a7380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2a7384: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2a7384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a7388: 0x2442adf0  addiu       $v0, $v0, -0x5210
    ctx->pc = 0x2a7388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946288));
    // 0x2a738c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a738cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a7390: 0xae0204ac  sw          $v0, 0x4AC($s0)
    ctx->pc = 0x2a7390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1196), GPR_U32(ctx, 2));
    // 0x2a7394: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a7394u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7398: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2a7398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    // 0x2a739c: 0xae0404d0  sw          $a0, 0x4D0($s0)
    ctx->pc = 0x2a739cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1232), GPR_U32(ctx, 4));
    // 0x2a73a0: 0xa2030531  sb          $v1, 0x531($s0)
    ctx->pc = 0x2a73a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a73a4: 0xae000510  sw          $zero, 0x510($s0)
    ctx->pc = 0x2a73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 0));
    // 0x2a73a8: 0xfe000538  sd          $zero, 0x538($s0)
    ctx->pc = 0x2a73a8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1336), GPR_U64(ctx, 0));
    // 0x2a73ac: 0xfe000540  sd          $zero, 0x540($s0)
    ctx->pc = 0x2a73acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 1344), GPR_U64(ctx, 0));
    // 0x2a73b0: 0xae0005a0  sw          $zero, 0x5A0($s0)
    ctx->pc = 0x2a73b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
    // 0x2a73b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a73b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a73b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a73b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a73bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A73BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A73BCu;
        // 0x2a73c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A73BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A73C4u;
    // 0x2a73c4: 0x0  nop
    ctx->pc = 0x2a73c4u;
    // NOP
    ctx->pc = 0x2a73c8u;
}
