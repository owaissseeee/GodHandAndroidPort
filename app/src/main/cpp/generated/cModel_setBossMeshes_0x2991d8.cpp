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

// Function: cModel_setBossMeshes
// Address: 0x2991d8 - 0x299320
void cModel_setBossMeshes_0x2991d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setBossMeshes_0x2991d8");
#endif

    switch (ctx->pc) {
        case 0x299244u: goto label_299244;
        case 0x299288u: goto label_299288;
        case 0x29929cu: goto label_29929c;
        case 0x2992b4u: goto label_2992b4;
        case 0x2992c8u: goto label_2992c8;
        case 0x2992f0u: goto label_2992f0;
        case 0x299304u: goto label_299304;
        default: break;
    }

    ctx->pc = 0x2991d8u;

    // 0x2991d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2991d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2991dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2991dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2991e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2991e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2991e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2991e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991e8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2991e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2991ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2991ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2991f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2991f4: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2991F4u;
    {
        const bool branch_taken_0x2991f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2991F4u;
        // 0x2991f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991f4) {
            ctx->pc = 0x299304u;
            goto label_299304;
        }
    }
    ctx->pc = 0x2991FCu;
    // 0x2991fc: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x2991fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x299200: 0x24020626  addiu       $v0, $zero, 0x626
    ctx->pc = 0x299200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1574));
    // 0x299204: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x299204u;
    {
        const bool branch_taken_0x299204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299204u;
        // 0x299208: 0x28620627  slti        $v0, $v1, 0x627 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1575) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299204) {
            ctx->pc = 0x2992D0u;
            goto label_2992d0;
        }
    }
    ctx->pc = 0x29920Cu;
    // 0x29920c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29920Cu;
    {
        const bool branch_taken_0x29920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29920Cu;
        // 0x299210: 0x24020625  addiu       $v0, $zero, 0x625 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1573));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29920c) {
            ctx->pc = 0x299224u;
            goto label_299224;
        }
    }
    ctx->pc = 0x299214u;
    // 0x299214: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x299214u;
    {
        const bool branch_taken_0x299214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299214u;
        // 0x299218: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299214) {
            ctx->pc = 0x299234u;
            goto label_299234;
        }
    }
    ctx->pc = 0x29921Cu;
    // 0x29921c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x29921Cu;
    {
        const bool branch_taken_0x29921c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29921Cu;
        // 0x299220: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29921c) {
            ctx->pc = 0x299308u;
            goto label_299308;
        }
    }
    ctx->pc = 0x299224u;
label_299224:
    // 0x299224: 0x24020627  addiu       $v0, $zero, 0x627
    ctx->pc = 0x299224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1575));
    // 0x299228: 0x54620037  bnel        $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x299228u;
    {
        const bool branch_taken_0x299228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x299228) {
            ctx->pc = 0x29922Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299228u;
            // 0x29922c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299308u;
            goto label_299308;
        }
    }
    ctx->pc = 0x299230u;
    // 0x299230: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x299230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_299234:
    // 0x299234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299238: 0x24a5ac48  addiu       $a1, $a1, -0x53B8
    ctx->pc = 0x299238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945864));
    // 0x29923c: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x29923Cu;
    SET_GPR_U32(ctx, 31, 0x299244u);
    ctx->pc = 0x299240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29923Cu;
    // 0x299240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x29923Cu, 0x299244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299244u;
label_299244:
    // 0x299244: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x299244u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x299248: 0x5460002f  bnel        $v1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x299248u;
    {
        const bool branch_taken_0x299248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299248) {
            ctx->pc = 0x29924Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299248u;
            // 0x29924c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299308u;
            goto label_299308;
        }
    }
    ctx->pc = 0x299250u;
    // 0x299250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x299250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x299254: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x299254u;
    {
        const bool branch_taken_0x299254 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x299258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299254u;
        // 0x299258: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299254) {
            ctx->pc = 0x2992A4u;
            goto label_2992a4;
        }
    }
    ctx->pc = 0x29925Cu;
    // 0x29925c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x29925cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x299260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x299260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299264: 0x0  nop
    ctx->pc = 0x299264u;
    // NOP
    // 0x299268: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x299268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29926c: 0x0  nop
    ctx->pc = 0x29926cu;
    // NOP
    // 0x299270: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x299270u;
    {
        const bool branch_taken_0x299270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x299274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299270u;
        // 0x299274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299270) {
            ctx->pc = 0x2992A8u;
            goto label_2992a8;
        }
    }
    ctx->pc = 0x299278u;
    // 0x299278: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x299278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x29927c: 0x24a5ac50  addiu       $a1, $a1, -0x53B0
    ctx->pc = 0x29927cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945872));
    // 0x299280: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x299280u;
    SET_GPR_U32(ctx, 31, 0x299288u);
    ctx->pc = 0x299284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299280u;
    // 0x299284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x299280u, 0x299288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299288u;
label_299288:
    // 0x299288: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x299288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x29928c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29928cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299290: 0x24a5ac58  addiu       $a1, $a1, -0x53A8
    ctx->pc = 0x299290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945880));
    // 0x299294: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x299294u;
    SET_GPR_U32(ctx, 31, 0x29929Cu);
    ctx->pc = 0x299298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299294u;
    // 0x299298: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x299294u, 0x29929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29929Cu;
label_29929c:
    // 0x29929c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x29929Cu;
    {
        const bool branch_taken_0x29929c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29929Cu;
        // 0x2992a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29929c) {
            ctx->pc = 0x299308u;
            goto label_299308;
        }
    }
    ctx->pc = 0x2992A4u;
label_2992a4:
    // 0x2992a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2992a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2992a8:
    // 0x2992a8: 0x24a5ac50  addiu       $a1, $a1, -0x53B0
    ctx->pc = 0x2992a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945872));
    // 0x2992ac: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2992ACu;
    SET_GPR_U32(ctx, 31, 0x2992B4u);
    ctx->pc = 0x2992B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992ACu;
    // 0x2992b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2992ACu, 0x2992B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992B4u;
label_2992b4:
    // 0x2992b4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2992b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2992b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2992b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992bc: 0x24a5ac58  addiu       $a1, $a1, -0x53A8
    ctx->pc = 0x2992bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945880));
    // 0x2992c0: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2992C0u;
    SET_GPR_U32(ctx, 31, 0x2992C8u);
    ctx->pc = 0x2992C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992C0u;
    // 0x2992c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2992C0u, 0x2992C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992C8u;
label_2992c8:
    // 0x2992c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2992C8u;
    {
        const bool branch_taken_0x2992c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2992CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2992C8u;
        // 0x2992cc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2992c8) {
            ctx->pc = 0x299308u;
            goto label_299308;
        }
    }
    ctx->pc = 0x2992D0u;
label_2992d0:
    // 0x2992d0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x2992d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2992d4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2992D4u;
    {
        const bool branch_taken_0x2992d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2992d4) {
            ctx->pc = 0x2992D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2992D4u;
            // 0x2992d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299308u;
            goto label_299308;
        }
    }
    ctx->pc = 0x2992DCu;
    // 0x2992dc: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2992dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2992e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2992e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992e4: 0x24a5ac60  addiu       $a1, $a1, -0x53A0
    ctx->pc = 0x2992e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945888));
    // 0x2992e8: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2992E8u;
    SET_GPR_U32(ctx, 31, 0x2992F0u);
    ctx->pc = 0x2992ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992E8u;
    // 0x2992ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2992E8u, 0x2992F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2992F0u;
label_2992f0:
    // 0x2992f0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2992f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2992f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2992f8: 0x24a5ac68  addiu       $a1, $a1, -0x5398
    ctx->pc = 0x2992f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945896));
    // 0x2992fc: 0xc0528ce  jal         func_14A338
    ctx->pc = 0x2992FCu;
    SET_GPR_U32(ctx, 31, 0x299304u);
    ctx->pc = 0x299300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2992FCu;
    // 0x299300: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A338u, 0x2992FCu, 0x299304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299304u;
label_299304:
    // 0x299304: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x299304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_299308:
    // 0x299308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x299308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29930c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29930cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299310: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x299310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299314: 0x3e00008  jr          $ra
    ctx->pc = 0x299314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299314u;
        // 0x299318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29931Cu;
    // 0x29931c: 0x0  nop
    ctx->pc = 0x29931cu;
    // NOP
    ctx->pc = 0x299320u;
}
