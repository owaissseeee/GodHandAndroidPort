#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: R607Init__Fv
// Address: 0x799220 - 0x799398
void R607Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R607Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799248u: goto label_799248;
        case 0x799270u: goto label_799270;
        case 0x799284u: goto label_799284;
        case 0x799300u: goto label_799300;
        case 0x799310u: goto label_799310;
        case 0x799318u: goto label_799318;
        case 0x799334u: goto label_799334;
        case 0x799340u: goto label_799340;
        case 0x79934cu: goto label_79934c;
        case 0x799358u: goto label_799358;
        case 0x799364u: goto label_799364;
        case 0x799374u: goto label_799374;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x799224: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x799228: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x799234: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x799238: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x79923c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x799240: 0xc1e6460  jal         func_799180
    ctx->pc = 0x799240u;
    SET_GPR_U32(ctx, 31, 0x799248u);
    ctx->pc = 0x799244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799240u;
    // 0x799244: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x799240u, 0x799248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799248u;
label_799248:
    // 0x799248: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x799248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x79924c: 0xae02b770  sw          $v0, -0x4890($s0)
    ctx->pc = 0x79924cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294948720), GPR_U32(ctx, 2));
    // 0x799250: 0x8c6b8658  lw          $t3, -0x79A8($v1)
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799254: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x799254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x799258: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x799258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x79925c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79925cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799260: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799260u;
    {
        const bool branch_taken_0x799260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799260u;
        // 0x799264: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799260) {
            ctx->pc = 0x799290u;
            goto label_799290;
        }
    }
    ctx->pc = 0x799268u;
    // 0x799268: 0xc1e66e4  jal         func_799B90
    ctx->pc = 0x799268u;
    SET_GPR_U32(ctx, 31, 0x799270u);
    ctx->pc = 0x79926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799268u;
    // 0x79926c: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B90u, 0x799268u, 0x799270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799270u;
label_799270:
    // 0x799270: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799274: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799278: 0x24a59690  addiu       $a1, $a1, -0x6970
    ctx->pc = 0x799278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940304));
    // 0x79927c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79927Cu;
    SET_GPR_U32(ctx, 31, 0x799284u);
    ctx->pc = 0x799280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79927Cu;
    // 0x799280: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79927Cu, 0x799284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799284u;
label_799284:
    // 0x799284: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x799284u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799288: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x799288u;
    {
        const bool branch_taken_0x799288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799288u;
        // 0x79928c: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799288) {
            ctx->pc = 0x799364u;
            goto label_799364;
        }
    }
    ctx->pc = 0x799290u;
label_799290:
    // 0x799290: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799294: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x799294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799298: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x79929c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7992a0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7992a4: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x7992a8: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7992ac: 0xa3a20008  sb          $v0, 0x8($sp)
    ctx->pc = 0x7992acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x7992b0: 0x3c0a0800  lui         $t2, 0x800
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)2048 << 16));
    // 0x7992b4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7992b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x7992b8: 0xa3a40018  sb          $a0, 0x18($sp)
    ctx->pc = 0x7992b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 4));
    // 0x7992bc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x7992bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x7992c0: 0xa3a60028  sb          $a2, 0x28($sp)
    ctx->pc = 0x7992c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 6));
    // 0x7992c4: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x7992c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x7992c8: 0xa3a80038  sb          $t0, 0x38($sp)
    ctx->pc = 0x7992c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 8));
    // 0x7992cc: 0xa3a90040  sb          $t1, 0x40($sp)
    ctx->pc = 0x7992ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 9));
    // 0x7992d0: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7992d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7992d4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x7992d8: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x7992d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x7992dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x7992E8u;
            goto label_7992e8;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0xa3a20028  sb          $v0, 0x28($sp)
    ctx->pc = 0x7992e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 2));
label_7992e8:
    // 0x7992e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x7992e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992ec: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x7992f0: 0x3c120058  lui         $s2, 0x58
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x7992f4: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x7992f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x7992f8: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x7992f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992fc: 0x0  nop
    ctx->pc = 0x7992fcu;
    // NOP
label_799300:
    // 0x799300: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x799300u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799304: 0x26446ab0  addiu       $a0, $s2, 0x6AB0
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 27312));
    // 0x799308: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799308u;
    SET_GPR_U32(ctx, 31, 0x799310u);
    ctx->pc = 0x79930Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799308u;
    // 0x79930c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799308u, 0x799310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799310u;
label_799310:
    // 0x799310: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799310u;
    SET_GPR_U32(ctx, 31, 0x799318u);
    ctx->pc = 0x799314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799310u;
    // 0x799314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799310u, 0x799318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799318u;
label_799318:
    // 0x799318: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x799318u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x79931c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79931Cu;
    {
        const bool branch_taken_0x79931c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79931Cu;
        // 0x799320: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79931c) {
            ctx->pc = 0x799300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799300;
        }
    }
    ctx->pc = 0x799324u;
    // 0x799324: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799328: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x79932c: 0xc1e6830  jal         func_79A0C0
    ctx->pc = 0x79932Cu;
    SET_GPR_U32(ctx, 31, 0x799334u);
    ctx->pc = 0x799330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79932Cu;
    // 0x799330: 0x2610ea60  addiu       $s0, $s0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0C0u, 0x79932Cu, 0x799334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799334u;
label_799334:
    // 0x799334: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799338: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799338u;
    SET_GPR_U32(ctx, 31, 0x799340u);
    ctx->pc = 0x79933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799338u;
    // 0x79933c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799338u, 0x799340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799340u;
label_799340:
    // 0x799340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799344: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799350: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x799350u;
    SET_GPR_U32(ctx, 31, 0x799358u);
    ctx->pc = 0x799354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799350u;
    // 0x799354: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x799350u, 0x799358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799358u;
label_799358:
    // 0x799358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79935c: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x8e842f84  lw          $a0, 0x2F84($s4)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x799368: 0x266593a0  addiu       $a1, $s3, -0x6C60
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939552));
    // 0x79936c: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x79936Cu;
    SET_GPR_U32(ctx, 31, 0x799374u);
    ctx->pc = 0x799370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79936Cu;
    // 0x799370: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x79936Cu, 0x799374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799374u;
label_799374:
    // 0x799374: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x799374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799378: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x799378u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79937c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x79937cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799380: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x799380u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799384: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x799384u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799388: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x799388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79938c: 0x3e00008  jr          $ra
    ctx->pc = 0x79938Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79938Cu;
        // 0x799390: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79938Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799394u;
    // 0x799394: 0x0  nop
    ctx->pc = 0x799394u;
    // NOP
    ctx->pc = 0x799398u;
}
} // namespace gh_r607
