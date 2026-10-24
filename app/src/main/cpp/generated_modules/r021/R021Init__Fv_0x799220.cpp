#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: R021Init__Fv
// Address: 0x799220 - 0x799368
void R021Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R021Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799240u: goto label_799240;
        case 0x79924cu: goto label_79924c;
        case 0x799260u: goto label_799260;
        case 0x79926cu: goto label_79926c;
        case 0x799284u: goto label_799284;
        case 0x799338u: goto label_799338;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799224: 0x24040130  addiu       $a0, $zero, 0x130
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x799228: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x799230: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799238: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799238u;
    SET_GPR_U32(ctx, 31, 0x799240u);
    ctx->pc = 0x79923Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799238u;
    // 0x79923c: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799238u, 0x799240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799240u;
label_799240:
    // 0x799240: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799244: 0xc0aa770  jal         func_2A9DC0
    ctx->pc = 0x799244u;
    SET_GPR_U32(ctx, 31, 0x79924Cu);
    ctx->pc = 0x799248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799244u;
    // 0x799248: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9DC0u, 0x799244u, 0x79924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79924Cu;
label_79924c:
    // 0x79924c: 0xfa000100  sqc2        $vf0, 0x100($s0)
    ctx->pc = 0x79924cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799250: 0xfa000110  sqc2        $vf0, 0x110($s0)
    ctx->pc = 0x799250u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799254: 0x2604012c  addiu       $a0, $s0, 0x12C
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 300));
    // 0x799258: 0xc0afa5a  jal         func_2BE968
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0x3c110004  lui         $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE968u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799264: 0xc1e651a  jal         func_799468
    ctx->pc = 0x799264u;
    SET_GPR_U32(ctx, 31, 0x79926Cu);
    ctx->pc = 0x799268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799264u;
    // 0x799268: 0xae50c2cc  sw          $s0, -0x3D34($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294951628), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799468u, 0x799264u, 0x79926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79926Cu;
label_79926c:
    // 0x79926c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799270: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799274: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799278: 0x24a59398  addiu       $a1, $a1, -0x6C68
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939544));
    // 0x79927c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x79927Cu;
    SET_GPR_U32(ctx, 31, 0x799284u);
    ctx->pc = 0x799280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79927Cu;
    // 0x799280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x79927Cu, 0x799284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799284u;
label_799284:
    // 0x799284: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x799288: 0x3c080400  lui         $t0, 0x400
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1024 << 16));
    // 0x79928c: 0x24f07a78  addiu       $s0, $a3, 0x7A78
    ctx->pc = 0x79928cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 31352));
    // 0x799290: 0x8ce47a78  lw          $a0, 0x7A78($a3)
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A78u));
    // 0x799294: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A80u));
    // 0x799298: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x79929c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x7992a0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x7992a4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x7992a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x7992a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x7992a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x7992ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7992acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7992b0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x7992b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7992b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7992b8: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x7992bc: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x7992bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x7992c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7992c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7992c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7992c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x7992c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x7992cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x7992d0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7992d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7992d4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x7992d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x7992d8: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x7992dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7992dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7992e0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x7992e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x7992e4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x7992e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x7992e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x7992ec: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x7992ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x7992f0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x7992f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x747A80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747A80u, _value); } while (0);
    // 0x7992f4: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x7992f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x7992f8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x7992F8u;
    {
        const bool branch_taken_0x7992f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992F8u;
        // 0x7992fc: 0xace47a78  sw          $a0, 0x7A78($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 31352), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992f8) {
            ctx->pc = 0x799338u;
            goto label_799338;
        }
    }
    ctx->pc = 0x799300u;
    // 0x799300: 0x8e42c2cc  lw          $v0, -0x3D34($s2)
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951628)));
    // 0x799304: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x799308: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79930c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799310: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x799310u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x799314: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x799314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x799318: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x799318u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x79931c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x79931cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x799320: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x799320u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x799324: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799328: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79932c: 0x3c09ff00  lui         $t1, 0xFF00
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65280 << 16));
    // 0x799330: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x79933c: 0x3c03007a  lui         $v1, 0x7A
    ctx->pc = 0x79933cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
    // 0x799340: 0xa460c2d0  sh          $zero, -0x3D30($v1)
    ctx->pc = 0x799340u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x79C2D0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x79C2D0u, _value); } while (0);
    // 0x799344: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x799344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x799348: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79934c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x79934cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x799350: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799350u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79935c: 0x3e00008  jr          $ra
    ctx->pc = 0x79935Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79935Cu;
        // 0x799360: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79935Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799364u;
    // 0x799364: 0x0  nop
    ctx->pc = 0x799364u;
    // NOP
    ctx->pc = 0x799368u;
}
} // namespace gh_r021
