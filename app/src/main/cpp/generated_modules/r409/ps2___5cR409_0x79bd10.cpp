#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: __5cR409
// Address: 0x79bd10 - 0x79be38
void ps2___5cR409_0x79bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___5cR409_0x79bd10");
#endif

    switch (ctx->pc) {
        case 0x79bd88u: goto label_79bd88;
        case 0x79be18u: goto label_79be18;
        default: break;
    }

    ctx->pc = 0x79bd10u;

    // 0x79bd10: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x79bd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x79bd14: 0xf8800080  sqc2        $vf0, 0x80($a0)
    ctx->pc = 0x79bd14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd18: 0xf8800090  sqc2        $vf0, 0x90($a0)
    ctx->pc = 0x79bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd1c: 0xf88000a0  sqc2        $vf0, 0xA0($a0)
    ctx->pc = 0x79bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd20: 0xf88000b0  sqc2        $vf0, 0xB0($a0)
    ctx->pc = 0x79bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd24: 0xf88000c0  sqc2        $vf0, 0xC0($a0)
    ctx->pc = 0x79bd24u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd28: 0xf88000d0  sqc2        $vf0, 0xD0($a0)
    ctx->pc = 0x79bd28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd2c: 0xf88000e0  sqc2        $vf0, 0xE0($a0)
    ctx->pc = 0x79bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd30: 0xf88000f0  sqc2        $vf0, 0xF0($a0)
    ctx->pc = 0x79bd30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd34: 0xf8800100  sqc2        $vf0, 0x100($a0)
    ctx->pc = 0x79bd34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd38: 0xf8800110  sqc2        $vf0, 0x110($a0)
    ctx->pc = 0x79bd38u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd3c: 0xf8800120  sqc2        $vf0, 0x120($a0)
    ctx->pc = 0x79bd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 288), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd40: 0xf8800130  sqc2        $vf0, 0x130($a0)
    ctx->pc = 0x79bd40u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 304), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd44: 0xf8800140  sqc2        $vf0, 0x140($a0)
    ctx->pc = 0x79bd44u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 320), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd48: 0xf8800150  sqc2        $vf0, 0x150($a0)
    ctx->pc = 0x79bd48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 336), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bd4c: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x79bd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bd50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bd50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bd54: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x79bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x79bd58: 0x2483003c  addiu       $v1, $a0, 0x3C
    ctx->pc = 0x79bd58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
    // 0x79bd5c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x79bd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bd60: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x79bd60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bd64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79bd68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79bd68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79bd6c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x79bd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x79bd70: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x79bd70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x79bd74: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x79bd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x79bd78: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x79bd78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x79bd7c: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x79bd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x79bd80: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x79bd80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x79bd84: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x79bd84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_79bd88:
    // 0x79bd88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79bd88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79bd8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79bd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79bd90: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79bd90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79bd94: 0x0  nop
    ctx->pc = 0x79bd94u;
    // NOP
    // 0x79bd98: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79BD98u;
    {
        const bool branch_taken_0x79bd98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BD98u;
        // 0x79bd9c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bd98) {
            ctx->pc = 0x79BD88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bd88;
        }
    }
    ctx->pc = 0x79BDA0u;
    // 0x79bda0: 0x24820190  addiu       $v0, $a0, 0x190
    ctx->pc = 0x79bda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x79bda4: 0xf88001e0  sqc2        $vf0, 0x1E0($a0)
    ctx->pc = 0x79bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 480), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bda8: 0xf88001f0  sqc2        $vf0, 0x1F0($a0)
    ctx->pc = 0x79bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 496), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdac: 0xf8800200  sqc2        $vf0, 0x200($a0)
    ctx->pc = 0x79bdacu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdb0: 0xf8800210  sqc2        $vf0, 0x210($a0)
    ctx->pc = 0x79bdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 528), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdb4: 0xf8800220  sqc2        $vf0, 0x220($a0)
    ctx->pc = 0x79bdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 544), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdb8: 0xf8800230  sqc2        $vf0, 0x230($a0)
    ctx->pc = 0x79bdb8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 560), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdbc: 0xf8800240  sqc2        $vf0, 0x240($a0)
    ctx->pc = 0x79bdbcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 576), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdc0: 0xf8800250  sqc2        $vf0, 0x250($a0)
    ctx->pc = 0x79bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 592), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdc4: 0xf8800260  sqc2        $vf0, 0x260($a0)
    ctx->pc = 0x79bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 608), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdc8: 0xf8800270  sqc2        $vf0, 0x270($a0)
    ctx->pc = 0x79bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 624), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdcc: 0xf8800280  sqc2        $vf0, 0x280($a0)
    ctx->pc = 0x79bdccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdd0: 0xf8800290  sqc2        $vf0, 0x290($a0)
    ctx->pc = 0x79bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdd4: 0xf88002a0  sqc2        $vf0, 0x2A0($a0)
    ctx->pc = 0x79bdd4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 672), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bdd8: 0xf88002b0  sqc2        $vf0, 0x2B0($a0)
    ctx->pc = 0x79bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 688), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79bddc: 0xa0800190  sb          $zero, 0x190($a0)
    ctx->pc = 0x79bddcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 400), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bde4: 0xac40013c  sw          $zero, 0x13C($v0)
    ctx->pc = 0x79bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 0));
    // 0x79bde8: 0x2483019c  addiu       $v1, $a0, 0x19C
    ctx->pc = 0x79bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 412));
    // 0x79bdec: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x79bdecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bdf0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x79bdf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x79bdf4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x79bdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x79bdf8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79bdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x79bdfc: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x79bdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x79be00: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x79be00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x79be04: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x79be04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x79be08: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x79be08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x79be0c: 0xac400130  sw          $zero, 0x130($v0)
    ctx->pc = 0x79be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 0));
    // 0x79be10: 0xac400134  sw          $zero, 0x134($v0)
    ctx->pc = 0x79be10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 0));
    // 0x79be14: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x79be14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_79be18:
    // 0x79be18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x79be18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x79be1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x79be1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x79be20: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x79be20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79be24: 0x0  nop
    ctx->pc = 0x79be24u;
    // NOP
    // 0x79be28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79BE28u;
    {
        const bool branch_taken_0x79be28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE28u;
        // 0x79be2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79be28) {
            ctx->pc = 0x79BE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79be18;
        }
    }
    ctx->pc = 0x79BE30u;
    // 0x79be30: 0x3e00008  jr          $ra
    ctx->pc = 0x79BE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE30u;
        // 0x79be34: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BE38u;
}
} // namespace gh_r409
