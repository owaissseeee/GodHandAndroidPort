#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r405_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r405
{
// Function: __5cR405
// Address: 0x79a428 - 0x79a4c0
void ps2___5cR405_0x79a428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR405_0x79a428");
#endif

    switch (ctx->pc) {
        case 0x79a4a0u: goto label_79a4a0;
        default: break;
    }

    ctx->pc = 0x79a428u;

    // 0x79a428: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x79a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x79a42c: 0xf8800070  sqc2        $vf0, 0x70($a0)
    ctx->pc = 0x79a42cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a430: 0xf8800080  sqc2        $vf0, 0x80($a0)
    ctx->pc = 0x79a430u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a434: 0xf8800090  sqc2        $vf0, 0x90($a0)
    ctx->pc = 0x79a434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a438: 0xf88000a0  sqc2        $vf0, 0xA0($a0)
    ctx->pc = 0x79a438u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a43c: 0xf88000b0  sqc2        $vf0, 0xB0($a0)
    ctx->pc = 0x79a43cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a440: 0xf88000c0  sqc2        $vf0, 0xC0($a0)
    ctx->pc = 0x79a440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a444: 0xf88000d0  sqc2        $vf0, 0xD0($a0)
    ctx->pc = 0x79a444u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a448: 0xf88000e0  sqc2        $vf0, 0xE0($a0)
    ctx->pc = 0x79a448u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a44c: 0xf88000f0  sqc2        $vf0, 0xF0($a0)
    ctx->pc = 0x79a44cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a450: 0xf8800100  sqc2        $vf0, 0x100($a0)
    ctx->pc = 0x79a450u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a454: 0xf8800110  sqc2        $vf0, 0x110($a0)
    ctx->pc = 0x79a454u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a458: 0xf8800120  sqc2        $vf0, 0x120($a0)
    ctx->pc = 0x79a458u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a45c: 0xf8800130  sqc2        $vf0, 0x130($a0)
    ctx->pc = 0x79a45cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a460: 0xf8800140  sqc2        $vf0, 0x140($a0)
    ctx->pc = 0x79a460u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a464: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x79a464u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a46c: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x79a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x79a470: 0x2483002c  addiu       $v1, $a0, 0x2C
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x79a474: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x79a474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a478: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x79a478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79a47c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79a480: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79a480u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79a484: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x79a484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x79a488: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x79a488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x79a48c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x79a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x79a490: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x79a490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x79a494: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x79a494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x79a498: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x79a498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x79a49c: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x79a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_79a4a0:
    // 0x79a4a0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79a4a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79a4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79a4a8: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79a4a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a4ac: 0x0  nop
    ctx->pc = 0x79a4acu;
    // NOP
    // 0x79a4b0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79A4B0u;
    {
        const bool branch_taken_0x79a4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B0u;
        // 0x79a4b4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a4b0) {
            ctx->pc = 0x79A4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a4a0;
        }
    }
    ctx->pc = 0x79A4B8u;
    // 0x79a4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4B8u;
        // 0x79a4bc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4C0u;
}
} // namespace gh_r405
