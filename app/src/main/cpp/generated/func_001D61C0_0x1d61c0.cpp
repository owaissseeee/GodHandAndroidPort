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

// Function: func_001D61C0
// Address: 0x1d61c0 - 0x1d6310
void func_001D61C0_0x1d61c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D61C0_0x1d61c0");
#endif

    switch (ctx->pc) {
        case 0x1d6204u: goto label_1d6204;
        case 0x1d6214u: goto label_1d6214;
        case 0x1d6224u: goto label_1d6224;
        case 0x1d6234u: goto label_1d6234;
        case 0x1d6248u: goto label_1d6248;
        case 0x1d6264u: goto label_1d6264;
        case 0x1d6274u: goto label_1d6274;
        case 0x1d6284u: goto label_1d6284;
        case 0x1d6294u: goto label_1d6294;
        case 0x1d62b0u: goto label_1d62b0;
        case 0x1d62ccu: goto label_1d62cc;
        case 0x1d62dcu: goto label_1d62dc;
        case 0x1d62ecu: goto label_1d62ec;
        case 0x1d62fcu: goto label_1d62fc;
        default: break;
    }

    ctx->pc = 0x1d61c0u;

    // 0x1d61c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d61c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d61c4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1d61c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1d61c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d61c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d61cc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1d61ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1d61d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d61d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d61d4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D61D4u;
    {
        const bool branch_taken_0x1d61d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D61D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61D4u;
        // 0x1d61d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61d4) {
            ctx->pc = 0x1D61F8u;
            goto label_1d61f8;
        }
    }
    ctx->pc = 0x1D61DCu;
    // 0x1d61dc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d61dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d61e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d61e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d61e4: 0x2442b1a0  addiu       $v0, $v0, -0x4E60
    ctx->pc = 0x1d61e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947232));
    // 0x1d61e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d61ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d61ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d61f0: 0x800008  jr          $a0
    ctx->pc = 0x1D61F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D61F8u: goto label_1d61f8;
            case 0x1D623Cu: goto label_1d623c;
            case 0x1D6250u: goto label_1d6250;
            case 0x1D629Cu: goto label_1d629c;
            case 0x1D62B8u: goto label_1d62b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D61F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D61F8u;
label_1d61f8:
    // 0x1d61f8: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x1d61f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x1d61fc: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1D61FCu;
    SET_GPR_U32(ctx, 31, 0x1D6204u);
    ctx->pc = 0x1D6200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D61FCu;
    // 0x1d6200: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1D61FCu, 0x1D6204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6204u;
label_1d6204:
    // 0x1d6204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6208: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d6208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d620c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D620Cu;
    SET_GPR_U32(ctx, 31, 0x1D6214u);
    ctx->pc = 0x1D6210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D620Cu;
    // 0x1d6210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D620Cu, 0x1D6214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6214u;
label_1d6214:
    // 0x1d6214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6218: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d6218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d621c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D621Cu;
    SET_GPR_U32(ctx, 31, 0x1D6224u);
    ctx->pc = 0x1D6220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D621Cu;
    // 0x1d6220: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D621Cu, 0x1D6224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6224u;
label_1d6224:
    // 0x1d6224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6228: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d6228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d622c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D622Cu;
    SET_GPR_U32(ctx, 31, 0x1D6234u);
    ctx->pc = 0x1D6230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D622Cu;
    // 0x1d6230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D622Cu, 0x1D6234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6234u;
label_1d6234:
    // 0x1d6234: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1D6234u;
    {
        const bool branch_taken_0x1d6234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6234u;
        // 0x1d6238: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6234) {
            ctx->pc = 0x1D6300u;
            goto label_1d6300;
        }
    }
    ctx->pc = 0x1D623Cu;
label_1d623c:
    // 0x1d623c: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x1d6240: 0xc0b59be  jal         func_2D66F8
    ctx->pc = 0x1D6240u;
    SET_GPR_U32(ctx, 31, 0x1D6248u);
    ctx->pc = 0x1D6244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6240u;
    // 0x1d6244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D66F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D66F8u, 0x1D6240u, 0x1D6248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6248u;
label_1d6248:
    // 0x1d6248: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1D6248u;
    {
        const bool branch_taken_0x1d6248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6248u;
        // 0x1d624c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6248) {
            ctx->pc = 0x1D6300u;
            goto label_1d6300;
        }
    }
    ctx->pc = 0x1D6250u;
label_1d6250:
    // 0x1d6250: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d6254: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x1d6258: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1d625c: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1D625Cu;
    SET_GPR_U32(ctx, 31, 0x1D6264u);
    ctx->pc = 0x1D6260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D625Cu;
    // 0x1d6260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1D625Cu, 0x1D6264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6264u;
label_1d6264:
    // 0x1d6264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6268: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d6268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d626c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D626Cu;
    SET_GPR_U32(ctx, 31, 0x1D6274u);
    ctx->pc = 0x1D6270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D626Cu;
    // 0x1d6270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D626Cu, 0x1D6274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6274u;
label_1d6274:
    // 0x1d6274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6278: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d6278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d627c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D627Cu;
    SET_GPR_U32(ctx, 31, 0x1D6284u);
    ctx->pc = 0x1D6280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D627Cu;
    // 0x1d6280: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D627Cu, 0x1D6284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6284u;
label_1d6284:
    // 0x1d6284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6288: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d6288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d628c: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D628Cu;
    SET_GPR_U32(ctx, 31, 0x1D6294u);
    ctx->pc = 0x1D6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D628Cu;
    // 0x1d6290: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D628Cu, 0x1D6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6294u;
label_1d6294:
    // 0x1d6294: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1D6294u;
    {
        const bool branch_taken_0x1d6294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6294u;
        // 0x1d6298: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6294) {
            ctx->pc = 0x1D6300u;
            goto label_1d6300;
        }
    }
    ctx->pc = 0x1D629Cu;
label_1d629c:
    // 0x1d629c: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x1d629cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x1d62a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d62a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62a4: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x1d62a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1d62a8: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1D62A8u;
    SET_GPR_U32(ctx, 31, 0x1D62B0u);
    ctx->pc = 0x1D62ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62A8u;
    // 0x1d62ac: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1D62A8u, 0x1D62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62B0u;
label_1d62b0:
    // 0x1d62b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D62B0u;
    {
        const bool branch_taken_0x1d62b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B0u;
        // 0x1d62b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62b0) {
            ctx->pc = 0x1D6300u;
            goto label_1d6300;
        }
    }
    ctx->pc = 0x1D62B8u;
label_1d62b8:
    // 0x1d62b8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1d62b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d62bc: 0x26040820  addiu       $a0, $s0, 0x820
    ctx->pc = 0x1d62bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
    // 0x1d62c0: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x1d62c4: 0xc0b59fc  jal         func_2D67F0
    ctx->pc = 0x1D62C4u;
    SET_GPR_U32(ctx, 31, 0x1D62CCu);
    ctx->pc = 0x1D62C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62C4u;
    // 0x1d62c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D67F0u, 0x1D62C4u, 0x1D62CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62CCu;
label_1d62cc:
    // 0x1d62cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d62ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62d0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1d62d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d62d4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D62D4u;
    SET_GPR_U32(ctx, 31, 0x1D62DCu);
    ctx->pc = 0x1D62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62D4u;
    // 0x1d62d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D62D4u, 0x1D62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62DCu;
label_1d62dc:
    // 0x1d62dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d62dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62e0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1d62e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1d62e4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D62E4u;
    SET_GPR_U32(ctx, 31, 0x1D62ECu);
    ctx->pc = 0x1D62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62E4u;
    // 0x1d62e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D62E4u, 0x1D62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62ECu;
label_1d62ec:
    // 0x1d62ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d62ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d62f0: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d62f4: 0xc07546e  jal         func_1D51B8
    ctx->pc = 0x1D62F4u;
    SET_GPR_U32(ctx, 31, 0x1D62FCu);
    ctx->pc = 0x1D62F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62F4u;
    // 0x1d62f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51B8u, 0x1D62F4u, 0x1D62FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62FCu;
label_1d62fc:
    // 0x1d62fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d62fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6300:
    // 0x1d6300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6304: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6304u;
        // 0x1d6308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D630Cu;
    // 0x1d630c: 0x0  nop
    ctx->pc = 0x1d630cu;
    // NOP
    ctx->pc = 0x1d6310u;
}
